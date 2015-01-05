#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node * prev;
	struct Node * next;
}Node;

Node * DLL_CreateNode(int data);
void DLL_AppendNode(Node **Head, Node* newNode);
void DLL_InsertNewHead(Node **Head, Node * newNode);
int DLL_GetNodeCount(Node * list);
Node * DLL_GetNodeAt(Node * list, int data);
void DLL_RemoveNode(Node **Head, Node* currentNode);
void DLL_DestroyNode(Node *node);
void DLL_InsertAfter(Node * currentNode, Node * newNode);

#endif
