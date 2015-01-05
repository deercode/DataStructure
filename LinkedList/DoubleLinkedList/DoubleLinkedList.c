#include "DoubleLinkedList.h"

/*                                                                                                
 * @brief : Make new node and set data.                                                           
 */                                                                                               
Node * DLL_CreateNode(int data)                                                                   
{                                                                                                 
        Node * newNode = (Node *)malloc(sizeof(Node));                                            
        newNode->data = data;    
	newNode->prev = NULL;                                                                 
        newNode->next = NULL;                                                                     
	
	// i didn't set return value, but complier set the rerutn value by itself.... very smart.
	return newNode;
}                                                                                                 

/*                                                                                                
 * @brief : Inset new node to end of list                                                         
 */                                                                                               
void DLL_AppendNode(Node **Head, Node* newNode)                                                   
{                                                                                                 
        if ( *Head == NULL )                                                                      
        {                                                                                         
                *Head = newNode;                                                                 
        }                                                                                         
        else                                                                                      
        {                                                                                         
                Node * Current = *Head;                                                           

                while ( Current->next != NULL )                                                   
                {                                                                                 
                        Current = Current->next;                                                  
                }                                                                                 
                Current->next = newNode;
		newNode->prev = Current;                                                          
        }                                                                                         
}                                                                                                 

/*                                                                                                
 * @brief : Insert new Node to Head                                                               
 */                                                                                               
void DLL_InsertNewHead(Node **Head, Node * newNode)                                               
{                                                                                                 
        if (*Head == NULL)                                                                        
        {                                                                                         
                *Head = newNode;                                                                  
        }                                                                                         
        else                                                                                      
        {                                                                                         
                newNode->next = (*Head);                                                          
                *Head = newNode;                                                                  
        }                                                                                         
}                 

/*                                                                                                
 * @brief : Count all nodes                                                                       
 */                                                                                               
int DLL_GetNodeCount(Node * list)                                                                 
{                                                                                                 
        Node * Current = list;                                                                    
        int cnt = 0;                                                                              
        while (Current != NULL)                                                                   
        {                                                                                         
                Current = Current->next;                                                          
                cnt++;                                                                            
        }                                                                                         
        return cnt;                                                                               
}                                                                                                 

/*                                                                                                
 * @brief : Get specific data node index                                                          
 */                                                                                               
Node * DLL_GetNodeAt(Node * list, int data)                                                       
{                                                                                                 
        Node * Current = list;
	int index =0 ;
	if ( Current == NULL)
	{
		printf("DLL_GetNodeAt : Current is NULL\n");
		return NULL;
	}

	for ( index = 0 ; index != data && Current != NULL ; index++)
	{
		Current=Current->next;
	}
	return Current;                              
}                                                                                                 

/*                                                                                                
 * @brief : Insert Node after current node                                                        
 */                                                                                               
void DLL_InsertAfter(Node * currentNode, Node * newNode)                                        
{                                                                                                 
	if ( currentNode == NULL ||newNode == NULL)
	{
		printf("Current or newNode is NULL!!\n");
		exit(1);
	}
        newNode->next = currentNode->next;
	newNode->prev = currentNode;                                                        
        currentNode->next = newNode;
	if ( currentNode->next != NULL)
		currentNode->next->prev = newNode;
		                                                              
}                          

/*                                                                                                
 * @brief : Delete currentNode from the list. not free memory                                     
 */                                                                                               
void DLL_RemoveNode(Node **Head, Node* currentNode)                                               
{                                                                                                 
        Node * Current;                                                                           

        if ( *Head == currentNode )                                                               
        {                                                                                         
                *Head = currentNode->next;                                                        
                                                                                         
        }
	else
	{
		currentNode->prev->next = currentNode->next;
		if ( currentNode->next != NULL )
			currentNode->next->prev = currentNode->prev;
			                                                                                         
	}
}                                                                                  

/*                                                                                                
 * @brief : Free specific memory space.                                                           
 */                                                                                               
void DLL_DestroyNode(Node *node)                                                                  
{                                                                                                 
        free(node);                                                                               
} 
