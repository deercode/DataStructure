#include "BinaryTree.h"

int main( void )
{
    /*  노드 생성 */
    Node* A = CreateNode('A');
    Node* B = CreateNode('B');
    Node* C = CreateNode('C');
    Node* D = CreateNode('D');
    Node* E = CreateNode('E');

    /*  트리에 노드 추가 */
    A->Left  = B;
    B->Left  = C;
    B->Right = D;
    A->Right = E;

    /*  트리 출력 */
    printf("Preorder Sequence \n");
    PreorderPrintTree( A );
    printf("\n\n");

    printf("Inorder Sequence \n");
    InorderPrintTree( A );
    printf("\n\n");

    printf("Postorder Sequence \n");
    PostorderPrintTree( A );
    printf("\n");

    /*  트리 소멸시키기 */
    DestroyTree( A );

    return 0;
}
