#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>


typedef struct Node
{
	int data;
	struct Node * next;
}Node;

Node * SLL_CreateNode(int data);
void SLL_AppendNode(Node **Head, Node* newNode);
void SLL_InsertNewHead(Node **Head, Node * newNode);
int SLL_GetNodeCount(Node * list);
Node * SLL_GetNodeAt(Node * list, int data);
void SLL_RemoveNode(Node **Head, Node* currentNode);
void SLL_DestroyNode(Node *node);
void SLL_InsertAfter(Node * currentNode, Node * newNode);

#endif
