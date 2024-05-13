#include "st_PNode.h"

Fst_PNode::Fst_PNode(Fst_Point* point)
{
    Point = point;
}

bool Fst_PNode::IsConvex(bool expectPositive)
{
    return expectPositive == (Next->Point->Cross(Prev->Point, Point) > 0);
}
