#include "st_Edge.h"

Fst_Edge::Fst_Edge(Fst_Point* p, Fst_Point* q)
{
    P = p;
    Q = q;
    if (p->Id == -1) Slope = 0;
    else if (Q->X == P->X) Slope = INFINITY;
    else Slope = (Q->Y - P->Y) / (Q->X - P->X);
}

float Fst_Edge::Orient(Fst_Point* point)
{
    return P->Cross(Q, point);
}

bool Fst_Edge::operator > (Fst_Point& rhs)
{
    return (P->Y == INFINITY && rhs.Y != INFINITY) || Orient(&rhs) < 0;
}

bool Fst_Edge::operator < (Fst_Point& rhs)
{
    return (P->Y == -INFINITY && rhs.Y != -INFINITY) || Orient(&rhs) > 0;
}
