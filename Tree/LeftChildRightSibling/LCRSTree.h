#ifndef LCRSTREE_H
#define LCRSTREE_H

#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;

typedef struct LCRSNode 
{

    struct LCRSNode* LeftChild;
    struct LCRSNode* RightSibling;

    ElementType Data;

} LCRSNode;


LCRSNode* CreateNode( ElementType NewData );

void      DestroyNode( LCRSNode* Node );
void      DestroyTree( LCRSNode* Root );

void      AddChildNode( LCRSNode* ParentNode, LCRSNode *ChildNode);
void      PrintTree( LCRSNode* Node, int Depth );

#endif
