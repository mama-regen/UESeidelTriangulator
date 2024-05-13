#include "st_QNode.h"
#include <st_Trap.h>

Fst_QNode::Fst_QNode(Fst_Edge* edge, Fst_QNode* left, Fst_QNode* right)
{
    SetY(edge, left, right);
}

Fst_QNode::Fst_QNode(Fst_Point* point, Fst_QNode* left, Fst_QNode* right)
{
    SetX(point, left, right);
}

Fst_QNode::Fst_QNode(Fst_Trap* trap)
{
    SetSink(trap);
}

Fst_QNode* Fst_QNode::SetY(Fst_Edge* edge, Fst_QNode* left, Fst_QNode* right)
{
    Edge = edge;
    Left = left;
    Right = right;
    Trap = nullptr;
    return this;
}

Fst_QNode* Fst_QNode::SetX(Fst_Point* point, Fst_QNode* left, Fst_QNode* right)
{
    Point = point;
    Left = left;
    Right = right;
    Trap = nullptr;
    return this;
}

Fst_QNode* Fst_QNode::SetSink(Fst_Trap* trap)
{
    Trap = trap;
    trap->Sink = this;
    return this;
}

Fst_QNode* Fst_QNode::GetSink(Fst_Trap* trap)
{
    if (trap->Sink != nullptr) return trap->Sink;
    return new Fst_QNode(trap);
}
