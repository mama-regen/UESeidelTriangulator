// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <st_Point.h>
#include <st_Poly.h>

struct Fst_Trap;

class SEIDELTRIANGULATOR_API Fst_Edge
{
public:
	Fst_Point* P;
	Fst_Point* Q;
	float Slope = 0;

	Fst_Poly* Poly = nullptr;
	Fst_Trap* Below = nullptr;
	Fst_Trap* Above = nullptr;

	Fst_Edge() = default;
	Fst_Edge(Fst_Point* p, Fst_Point* q);

	float Orient(Fst_Point* point);
	
	bool operator > (Fst_Point& rhs);
	bool operator < (Fst_Point& rhs);
};
