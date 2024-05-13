// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <st_PNode.h>
#include <st_Point.h>

struct SEIDELTRIANGULATOR_API Fst_Poly
{
private:
	int32 Len = 0;
public:
	int32 Length() { return Len; }

	Fst_PNode* First = nullptr;
	Fst_PNode* Last = nullptr;

	Fst_Poly(Fst_Point* p, Fst_Point* q, Fst_Point* r);
	~Fst_Poly();

	void Add(Fst_Point* point);
	void Remove(Fst_PNode* node);
	void InsertBefore(Fst_Point* point, Fst_PNode* node);
	void Clear();
};
