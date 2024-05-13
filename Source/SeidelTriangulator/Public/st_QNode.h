// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <st_Point.h>
#include <st_Edge.h>

/**
 * 
 */
struct SEIDELTRIANGULATOR_API Fst_QNode
{
public:
	Fst_QNode* Left = nullptr;
	Fst_QNode* Right = nullptr;
	Fst_Edge* Edge = nullptr;
	Fst_Point* Point = nullptr;
	Fst_Trap* Trap = nullptr;

	Fst_QNode() {}
	Fst_QNode(Fst_Edge* edge, Fst_QNode* left, Fst_QNode* right);
	Fst_QNode(Fst_Point* point, Fst_QNode* left, Fst_QNode* right);
	Fst_QNode(Fst_Trap* trap);

	Fst_QNode* SetY(Fst_Edge* edge, Fst_QNode* left, Fst_QNode* right);
	Fst_QNode* SetX(Fst_Point* point, Fst_QNode* left, Fst_QNode* right);
	Fst_QNode* SetSink(Fst_Trap* Trap);

	static Fst_QNode* GetSink(Fst_Trap* Trap);
};
