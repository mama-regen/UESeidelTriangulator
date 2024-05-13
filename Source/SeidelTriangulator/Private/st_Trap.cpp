// Fill out your copyright notice in the Description page of Project Settings.


#include "st_Trap.h"

void Fst_Trap::AddPoint(Fst_Edge* edge, Fst_Point* point)
{
    Fst_Poly* poly = edge->Poly;

    if (poly == nullptr) {
        if (*point != *edge->P && *point != *edge->Q) {
            edge->Poly = new Fst_Poly(edge->P, point, edge->Q);
        }
    }
    else {
        Fst_PNode* v = poly->First;
        while (v != nullptr) {
            if (point == v->Point) return;
            if (point < v->Point) {
                poly->InsertBefore(point, v);
                return;
            }
            v = v->Next;
        }
        poly->Add(point);
    }
}

Fst_Trap::Fst_Trap(Fst_Point* left, Fst_Point* right, Fst_Edge* top, Fst_Edge* bottom)
{
    Left = left;
    Right = right;
    Top = top;
    Bottom = bottom;
}

void Fst_Trap::UpdateLeft(Fst_Trap* ul, Fst_Trap* ll)
{
    UpperLeft = ul;
    if (ul != nullptr) ul->UpperRight = this;
    LowerLeft = ll;
    if (ll != nullptr) ll->LowerRight = this;
}

void Fst_Trap::UpdateRight(Fst_Trap* ur, Fst_Trap* lr)
{
    UpperRight = ur;
    if (ur != nullptr) ur->UpperLeft = this;
    LowerLeft = lr;
    if (lr != nullptr) lr->LowerLeft = this;
}

void Fst_Trap::UpdateSides(Fst_Trap* ul, Fst_Trap* ll, Fst_Trap* ur, Fst_Trap* lr)
{
    UpdateLeft(ul, ll);
    UpdateRight(ur, lr);
}

void Fst_Trap::MarkInside()
{
    TArray<Fst_Trap*> stack;
    stack.Add(this);

    do {
        Fst_Trap* curr = stack.Pop();
        if (!curr->Inside) {
            curr->Inside = true;
            if (curr->UpperLeft != nullptr) stack.Add(curr->UpperLeft);
            if (curr->LowerLeft != nullptr) stack.Add(curr->LowerLeft);
            if (curr->UpperRight != nullptr) stack.Add(curr->UpperRight);
            if (curr->LowerRight != nullptr) stack.Add(curr->LowerRight);
        }
    } while (stack.Num() > 0);
}

void Fst_Trap::AddPoints()
{
    if (&Left != &Bottom->P) AddPoint(Bottom, Left);
    if (&Right != &Bottom->Q) AddPoint(Bottom, Right);
    if (&Left != &Top->P) AddPoint(Top, Left);
    if (&Right != &Top->Q) AddPoint(Top, Right);
}

bool Fst_Trap::Contains(Fst_Point* point)
{
    bool a = *point > *Left;
    bool b = *point < *Right;
    bool c = *Top > *point;
    bool d = *Bottom < *point;
    return a && b && c && d;
}

Fst_QNode* Fst_Trap::PopSink()
{
    Fst_QNode* sink = Sink;
    Sink = nullptr;
    return sink;
}
