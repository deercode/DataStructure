#include "LCRSTree.h"

int main( void )
{
    /*  노드 생성 */
    LCRSNode* Root = CreateNode('A');

    LCRSNode* B = CreateNode('B');
    LCRSNode* C = CreateNode('C');
    LCRSNode* D = CreateNode('D');
    LCRSNode* E = CreateNode('E');
    LCRSNode* F = CreateNode('F');
    LCRSNode* G = CreateNode('G');
    LCRSNode* H = CreateNode('H');
    LCRSNode* I = CreateNode('I');
    LCRSNode* J = CreateNode('J');
    LCRSNode* K = CreateNode('K');

    /*  트리에 노드 추가 */
    AddChildNode( Root, B );
        AddChildNode( B, C );
        AddChildNode( B, D );
            AddChildNode( D, E );
            AddChildNode( D, F );

    AddChildNode( Root, G );
        AddChildNode( G, H );

    AddChildNode( Root, I );
        AddChildNode( I, J );
            AddChildNode( J, K );

    /*  트리 출력 */
    PrintTree( Root, 0 );

    /*  트리 소멸시키기 */
    DestroyTree( Root );

    return 0;
}
