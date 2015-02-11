#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    struct Node* Left;
    struct Node* Right;
    char Data;
} Node;

Node*  CreateNode( char NewData );

void      DestroyNode( Node* Node );
void      DestroyTree( Node* Root );

void      PreorderPrintTree( Node* Node );
void      InorderPrintTree( Node* Node );
void      PostorderPrintTree( Node* Node );

#endif
