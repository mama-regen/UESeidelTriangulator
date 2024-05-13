// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <st_Triang.h>
#include <st_Shape.h>
#include <st_PNode.h>
#include <st_Edge.h>
#include <st_Poly.h>
#include "SeidelTriangulatorLib.generated.h"

/**
 * 
 */
UCLASS()
class SEIDELTRIANGULATOR_API USeidelTriangulatorLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

private:
	static bool IsEar(Fst_PNode* node, Fst_Poly* poly, bool pos);
	static void TriangulateMount(TArray<Fst_Triang>& tris, Fst_Edge* edge);
	static TArray<Fst_Edge*> PointsToEdges(TArray<FVector2D> points, FVector2D origin, int32 begin);

public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Triangulate Shape", Keywords = "Seidel Triangulation Shape"))
	static TArray<Fst_Triang> TriangulateShape(Fst_Shape shape);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Ring", Keywords = "Seidel Triangulation Ring"))
	static Fst_Ring CreateRing(TArray<FVector2D> points);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Shape", Keywords = "Seidel Triangulation Shape"))
	static Fst_Shape CreateShape(Fst_Ring Bounds, TArray<Fst_Ring> Holes);
};
