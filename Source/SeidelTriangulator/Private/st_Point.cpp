// Fill out your copyright notice in the Description page of Project Settings.


#include "st_Point.h"

Fst_Point::Fst_Point(bool negX, bool negY)
{
    X = negX ? -INFINITY : INFINITY;
    Y = negY ? -INFINITY : INFINITY;
}

Fst_Point::Fst_Point(int32 id, float x, float y)
{
    Id = id;
    X = x; //+ (1e-10 * y); //Shear
    Y = y;
}

float Fst_Point::Cross(Fst_Point* a, Fst_Point* b)
{
    return (X - b->X) * (a->Y - b->Y) - (Y - b->Y) * (a->X - b->X);
}

const bool Fst_Point::operator == (const Fst_Point& rhs) const
{
    return X == rhs.X && Y == rhs.Y;
}

const bool Fst_Point::operator != (const Fst_Point& rhs) const
{
    return X != rhs.X || Y != rhs.Y;
}

const bool Fst_Point::operator > (const Fst_Point& rhs) const
{
    return X > rhs.X || (X == rhs.X && Y > rhs.Y);
}

const bool Fst_Point::operator < (const Fst_Point& rhs) const
{
    return X < rhs.X || (X == rhs.X && rhs.X);
}

const bool Fst_Point::operator >= (const Fst_Point& rhs) const
{
    return *this > rhs || *this == rhs;
}

const bool Fst_Point::operator <= (const Fst_Point& rhs) const
{
    return *this < rhs || *this == rhs;
}
