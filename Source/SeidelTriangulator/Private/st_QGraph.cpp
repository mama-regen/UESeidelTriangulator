// Fill out your copyright notice in the Description page of Project Settings.


#include "st_QGraph.h"
#include <st_QNode.h>

Ust_QGraph::Ust_QGraph(Fst_Trap* head)
{
    Head = Fst_QNode::GetSink(head);
}

Ust_QGraph::~Ust_QGraph()
{
    //Clear();
}

Fst_Trap* Ust_QGraph::Locate(Fst_Point* point, float slope)
{
    Fst_QNode* node = Head;

    while (node != nullptr) {
        if (node->Trap != nullptr) return node->Trap;
        if (node->Point != nullptr) node = (*point >= *node->Point) ? node->Right : node->Left;
        else if (node->Edge != nullptr)
        {
            float ori = node->Edge->Orient(point);
            if (ori != 0) {
                node = (ori < 0) ? node->Right : node->Left;
            }
            else {
                node = (slope < node->Edge->Slope) ? node->Right : node->Left;
            }
        }
    }

    return nullptr;
}

void Ust_QGraph::Handle(Fst_QNode* sink, Fst_Edge* edge, Fst_Trap* t1, Fst_Trap* t2) // Case 3
{
    sink->SetY(edge, Fst_QNode::GetSink(t1), Fst_QNode::GetSink(t2));
}

void Ust_QGraph::Handle(Fst_QNode* sink, Fst_Edge* edge, Fst_Trap* t1, Fst_Trap* t2, Fst_Trap* t3, bool Case2) // Case 2 / 4
{
    Fst_QNode* yN = new Fst_QNode(
        edge,
        Fst_QNode::GetSink(Case2 ? t2 : t1),
        Fst_QNode::GetSink(Case2 ? t3 : t2)
    );
    sink->SetX(
        Case2 ? edge->P : edge->Q,
        Case2 ? Fst_QNode::GetSink(t1) : yN,
        Case2 ? yN : Fst_QNode::GetSink(t3)
    );
}

void Ust_QGraph::Handle(Fst_QNode* sink, Fst_Edge* edge, Fst_Trap* t1, Fst_Trap* t2, Fst_Trap* t3, Fst_Trap* t4) // Case 1
{
    Fst_QNode* yN = new Fst_QNode(edge, Fst_QNode::GetSink(t2), Fst_QNode::GetSink(t3));
    Fst_QNode* xN = new Fst_QNode(edge->Q, yN, Fst_QNode::GetSink(t4));
    sink->SetX(edge->P, Fst_QNode::GetSink(t1), xN);
}

void Ust_QGraph::Clear()
{
    TArray<Fst_QNode*> stack;
    stack.Add(Head);

    do {
        Fst_QNode* curr = stack.Pop();
        if (curr->Right != nullptr) stack.Add(curr->Right);
        if (curr->Left != nullptr) stack.Add(curr->Left);
        delete curr;
    } while (stack.Num() > 0);
}
