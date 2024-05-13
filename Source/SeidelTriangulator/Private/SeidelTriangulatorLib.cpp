// Fill out your copyright notice in the Description page of Project Settings.


#include "SeidelTriangulatorLib.h"
#include <st_TrapMap.h>

#include <Windows.h>
#include <iostream>
#include <sstream>

bool USeidelTriangulatorLib::IsEar(Fst_PNode* node, Fst_Poly* poly, bool pos)
{
	return (
		!node->Ear &&
		node != poly->First &&
		node != poly->Last &&
		node->IsConvex(pos)
	);
}

void USeidelTriangulatorLib::TriangulateMount(TArray<Fst_Triang>& tris, Fst_Edge* edge)
{
	Fst_Poly* poly = edge->Poly;
	Fst_PNode* pn = poly->First->Next;

	if (poly->Length() < 3) throw std::exception("Polygons need at least 3 points");
	if (poly->Length() == 3) {
		tris.Add(Fst_Triang(edge->P->Id, pn->Point->Id, edge->Q->Id));
		return;
	}

	TArray<Fst_PNode*> points;
	bool pos = pn->Point->Cross(edge->Q, edge->P) > 0;

	while (pn != poly->Last) {
		if (IsEar(pn, poly, pos)) {
			pn->Ear = true;
			points.Add(pn);
		}
		pn = pn->Next;
	}

	for (int32 i = 0; i < points.Num(); i++) {
		Fst_PNode* ear = points[i];

		Fst_PNode* prev = ear->Prev;
		Fst_PNode* next = ear->Next;

		tris.Add(Fst_Triang(prev->Point->Id, ear->Point->Id, next->Point->Id));

		poly->Remove(ear);

		if (IsEar(prev, poly, pos)) {
			prev->Ear = true;
			points.Add(prev);
		}
		if (IsEar(next, poly, pos)) {
			next->Ear = true;
			points.Add(next);
		}

		points.RemoveAt(0);
	}
}

TArray<Fst_Edge*> USeidelTriangulatorLib::PointsToEdges(TArray<FVector2D> points, FVector2D origin, int32 begin)
{
	TArray<Fst_Edge*> result;
	int limit = points.Num();
	result.Reserve(limit);
	int gi = -1;

	for (int i = 0; i < limit; i += 1) {
		if (gi >= i) continue;
		gi = i;

		int j = (i + 1) % limit;
		FVector2D pV = points[i];
		FVector2D qV = points[j];

		Fst_Point* p = new Fst_Point(
			begin + i,
			pV.X - origin.X,
			pV.Y - origin.Y
		);
		Fst_Point* q = new Fst_Point(
			begin + j,
			qV.X - origin.X,
			qV.Y - origin.Y
		);

		bool flip = *p > *q;
		Fst_Edge* edge = new Fst_Edge(
			flip ? q : p,
			flip ? p : q
		);

		result.Push(edge);
	}

	return result;
}

TArray<Fst_Triang> USeidelTriangulatorLib::TriangulateShape(Fst_Shape shape)
{
	TArray<Fst_Triang> tris;
	TArray<Fst_Edge*> edges;
	TArray<Fst_Ring*> rings;
	rings.Reserve(1 + shape.Holes.Num());

	rings.Emplace(&shape.Bounds);
	for (int32 i = 0; i < shape.Holes.Num(); i++) {
		rings.Emplace(&shape.Holes[i]);
	}

	FVector2D orig = FVector2D(0.f, 0.f);
	/*for (int32 i = 0; i < rings[0]->Points.Num(); i++) orig += rings[0]->Points[i];
	orig /= FVector2D(rings[0]->Points.Num());*/

	for (int r = 0; r < rings.Num(); r++) {
		int idx = r > 0 ? rings[r - 1]->Points.Num() : 0;
		edges.Append(PointsToEdges(rings[r]->Points, orig, idx));
	}

	Ust_TrapMap* map = new Ust_TrapMap();
	for (int32 i = 0; i < edges.Num(); i++) map->AddEdge(edges[i]);
	map->CollectPoints();

	for (int32 i = 0; i < edges.Num(); i++) {
		if (edges[i]->Poly != nullptr && edges[i]->Poly->Length() > 0) {
			TriangulateMount(tris, edges[i]);
		}
	}

	return tris;
}

Fst_Ring USeidelTriangulatorLib::CreateRing(TArray<FVector2D> points)
{
	return Fst_Ring(points);
}

Fst_Shape USeidelTriangulatorLib::CreateShape(Fst_Ring Bounds, TArray<Fst_Ring> Holes)
{
	return Fst_Shape(Bounds, Holes);
}
