// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <st_QNode.h>
#include <st_Trap.h>
#include <st_Point.h>
#include <st_Edge.h>

class SEIDELTRIANGULATOR_API Ust_QGraph
{
private:
	Fst_QNode* Head = nullptr;
public:
	Ust_QGraph() {};
	Ust_QGraph(Fst_Trap* head);
	~Ust_QGraph();

	Fst_Trap* Locate(Fst_Point* point, float slope);

	void Handle(Fst_QNode* sink, Fst_Edge* edge, Fst_Trap* t1, Fst_Trap* t2);
	void Handle(Fst_QNode* sink, Fst_Edge* edge, Fst_Trap* t1, Fst_Trap* t2, Fst_Trap* t3, bool Case2);
	void Handle(Fst_QNode* sink, Fst_Edge* edge, Fst_Trap* t1, Fst_Trap* t2, Fst_Trap* t3, Fst_Trap* t4);

	void Clear();
};
