#include "st_TrapMap.h"

Fst_Trap* Ust_TrapMap::Next(Fst_Trap* trap, Fst_Edge* edge)
{
    if (*edge->Q <= *trap->Right) return nullptr;
    Fst_Trap* result = *edge > *trap->Right ? trap->UpperRight : trap->LowerRight;
    if (result == nullptr) {
        throw "Uh oh";
    }
    return result;
}

void Ust_TrapMap::Case1(Fst_Trap* trap, Fst_Edge* edge)
{
    Fst_Trap* t2 = new Fst_Trap(edge->P, edge->Q, trap->Top, edge);
    Fst_Trap* t3 = new Fst_Trap(edge->P, edge->Q, edge, trap->Bottom);
    Fst_Trap* t4 = new Fst_Trap(edge->Q, trap->Right, trap->Top, trap->Bottom);

    t4->UpdateRight(trap->UpperRight, trap->LowerRight);
    t4->UpdateLeft(t2, t3);

    trap->Right = edge->P;
    trap->UpdateRight(t2, t3);

    Graph.Handle(trap->PopSink(), edge, trap, t2, t3, t4);

    this->Items.Add(t2);
    this->Items.Add(t3);
    this->Items.Add(t4);
}

Fst_Trap* Ust_TrapMap::Case2(Fst_Trap* trap, Fst_Edge* edge)
{
    Fst_Trap* next = Next(trap, edge);
    Fst_Trap* t2 = new Fst_Trap(edge->P, trap->Right, trap->Top, edge);
    Fst_Trap* t3 = new Fst_Trap(edge->P, trap->Right, edge, trap->Bottom);

    trap->Right = edge->P;

    trap->UpdateLeft(trap->UpperLeft, trap->LowerLeft);
    t2->UpdateSides(trap, nullptr, trap->UpperRight, nullptr);
    t3->UpdateSides(nullptr, trap, nullptr, trap->LowerRight);

    BCross = trap->Bottom;
    TCross = trap->Top;

    edge->Above = t2;
    edge->Below = t3;

    Graph.Handle(trap->PopSink(), edge, trap, t2, t3, true);

    Items.Add(t2);
    Items.Add(t3);

    return next;
}

Fst_Trap* Ust_TrapMap::Case3(Fst_Trap* trap, Fst_Edge* edge)
{
    Fst_Trap* next = Next(trap, edge);
    Fst_Trap* lr = trap->LowerRight;
    Fst_Trap* ll = trap->LowerLeft;
    Fst_Edge* top = trap->Top;
    Fst_Edge* bottom = trap->Bottom;
    Fst_Trap* t1 = nullptr;
    Fst_Trap* t2 = nullptr;

    if (TCross == trap->Top) {
        t1 = trap->UpperLeft;
        t1->UpdateRight(trap->UpperRight, nullptr);
        t1->Right = trap->Right;
    }
    else {
        t1 = trap;
        t1->Bottom = edge;
        t1->LowerLeft = edge->Above;
        if (edge->Above != nullptr) edge->Above->LowerRight = t1;
        t1->LowerRight = nullptr;
    }

    if (BCross == bottom) {
        t2 = ll;
        t2->UpdateRight(nullptr, lr);
        t2->Right = trap->Right;
    }
    else if (t1 == trap) {
        t2 = new Fst_Trap(trap->Left, trap->Right, edge, bottom);
        t2->UpdateSides(edge->Below, ll, nullptr, lr);
        Items.Add(t2);
    }
    else {
        t2 = trap;
        t2->Top = edge;
        t2->UpperLeft = edge->Below;
        if (edge->Below != nullptr) edge->Below->UpperRight = t2;
        t2->UpperRight = nullptr;
    }

    if (trap != t1 && trap != t2) trap->Removed = true;

    BCross = bottom;
    TCross = top;

    edge->Above = t1;
    edge->Below = t2;

    Graph.Handle(trap->PopSink(), edge, t1, t2);

    return next;
}

Fst_Trap* Ust_TrapMap::Case4(Fst_Trap* trap, Fst_Edge* edge)
{
    Fst_Trap* next = Next(trap, edge);
    Fst_Trap* t1 = nullptr;
    Fst_Trap* t2 = nullptr;

    if (TCross == trap->Top) {
        t1 = trap->UpperLeft;
        t1->Right = edge->Q;
    }
    else {
        t1 = new Fst_Trap(trap->Left, edge->Q, trap->Top, edge);
        t1->UpdateLeft(trap->UpperLeft, edge->Above);
        Items.Add(t1);
    }

    if (BCross == trap->Bottom) {
        t2 = trap->LowerLeft;
        t2->Right = edge->Q;
    }
    else {
        t2 = new Fst_Trap(trap->Left, edge->Q, edge, trap->Bottom);
        t2->UpdateLeft(edge->Below, trap->LowerLeft);
        Items.Add(t2);
    }

    trap->Left = edge->Q;
    trap->UpdateLeft(t1, t2);

    Graph.Handle(trap->PopSink(), edge, t1, t2, trap, false);

    return next;
}

Ust_TrapMap::Ust_TrapMap()
{
    Fst_Edge* top = new Fst_Edge(&tl, &tr);
    Fst_Edge* bottom = new Fst_Edge(&bl, &br);
    Root = new Fst_Trap(bottom->P, top->Q, top, bottom);
    Items.Add(Root);
    Graph = Ust_QGraph(Root);
}

Ust_TrapMap::~Ust_TrapMap()
{
    //Clear();
}

void Ust_TrapMap::AddEdge(Fst_Edge* edge)
{
    Fst_Trap* trap = Graph.Locate(edge->P, edge->Slope);
    bool cp = false;
    bool cq = false;

    while (trap != nullptr) {
        cp = cp ? false : trap->Contains(edge->P);
        cq = cq ? false : trap->Contains(edge->Q);

        if (cp) {
            if (cq) {
                Case1(trap, edge);
                trap = nullptr;
            }
            else {
                trap = Case2(trap, edge);
            }
        }
        else {
            if (cq) {
                trap = Case4(trap, edge);
            }
            else {
                trap = Case3(trap, edge);
            }
        }
    }

    BCross = nullptr;
    TCross = nullptr;
}

void Ust_TrapMap::CollectPoints()
{
    Fst_Trap* trap = nullptr;
    for (int32 i = 0; i < Items.Num(); i++) {
        trap = Items[i];
        if (trap->Removed) continue;
        if (trap->Top == Root->Top && trap->Bottom->Below != nullptr && !trap->Bottom->Below->Removed) {
            trap->Bottom->Below->MarkInside();
            break;
        }
        if (trap->Bottom == Root->Bottom && trap->Top->Above != nullptr && !trap->Top->Above->Removed) {
            trap->Top->Above->MarkInside();
            break;
        }
    }

    for (int32 i = 0; i < Items.Num(); i++) {
        trap = Items[i];
        if (!trap->Removed && trap->Inside) trap->AddPoints();
    }
}

void Ust_TrapMap::Clear()
{
    TArray<Fst_Trap*> stack;
    stack.Add(Root);

    do {
        Fst_Trap* curr = stack.Pop();
        if (curr->UpperRight != nullptr) stack.Add(curr->UpperRight);
        if (curr->UpperLeft != nullptr) stack.Add(curr->UpperLeft);
        if (curr->LowerRight != nullptr) stack.Add(curr->LowerRight);
        if (curr->LowerLeft != nullptr) stack.Add(curr->LowerLeft);
        delete curr;
    } while (stack.Num() > 0);
}
