// Fill out your copyright notice in the Description page of Project Settings.


#include "st_Poly.h"

Fst_Poly::Fst_Poly(Fst_Point* p, Fst_Point* q, Fst_Point* r)
{
	Add(p);
	Add(q);
	Add(r);
}

Fst_Poly::~Fst_Poly()
{
	//Clear();
}

void Fst_Poly::Add(Fst_Point* point)
{
	Fst_PNode* node = new Fst_PNode(point);
	if (Len == 0) {
		First = node;
		Last = node;
	}
	else {
		Last->Next = node;
		node->Prev = Last;
		Last = node;
	}

	Len++;
}

void Fst_Poly::Remove(Fst_PNode* node)
{
	if (Len == 0) return;

	if (node == First) {
		First = First->Next;
		if (First == nullptr) Last = nullptr;
		else First->Prev = nullptr;
	}
	else if (node == Last) {
		Last = Last->Prev;
		Last->Next = nullptr;
	}
	else {
		node->Prev->Next = node->Next;
		node->Next->Prev = node->Prev;
	}

	node->Prev = nullptr;
	node->Next = nullptr;

	Len--;
}

void Fst_Poly::InsertBefore(Fst_Point* point, Fst_PNode* node)
{
	Fst_PNode* nNode = new Fst_PNode(point);
	nNode->Prev = node->Prev;
	nNode->Next = node;

	if (node->Prev == nullptr) First = nNode;
	else node->Prev->Next = nNode;

	node->Prev = nNode;

	Len++;
}

void Fst_Poly::Clear()
{
	TArray<Fst_PNode*> stack;
	stack.Add(First);
	stack.Add(Last);

	do {
		Fst_PNode* curr = stack.Pop();
		if (curr->Next != nullptr) stack.Add(curr->Next);
		if (curr->Prev != nullptr) stack.Add(curr->Prev);
		delete curr;
	} while (stack.Num());
}
