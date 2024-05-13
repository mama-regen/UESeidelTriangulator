// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <st_Point.h>

struct SEIDELTRIANGULATOR_API Fst_PNode
{
public:
	Fst_Point* Point = nullptr;
	Fst_PNode* Next = nullptr;
	Fst_PNode* Prev = nullptr;
	bool Ear = false;

	Fst_PNode(Fst_Point* point);

	bool IsConvex(bool expectPositive);
};
