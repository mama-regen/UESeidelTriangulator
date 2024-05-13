// Fill out your copyright notice in the Description page of Project Settings.


#include "st_Triang.h"

Fst_Triang::Fst_Triang(int32 p, int32 q, int32 r)
{
    P = p;
    Q = q;
    R = r;
}

int32 Fst_Triang::GetP()
{
    return P;
}

int32 Fst_Triang::GetQ()
{
    return Q;
}

int32 Fst_Triang::GetR()
{
    return R;
}
