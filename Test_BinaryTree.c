#include "BinaryTree.h"


int main(void) {

	//Create Node
	SBTNode* A = SBT_CreateNode('A');
	SBTNode* B = SBT_CreateNode('B');
	SBTNode* C = SBT_CreateNode('C');
	SBTNode* D = SBT_CreateNode('D');
	SBTNode* E = SBT_CreateNode('E');
	SBTNode* F = SBT_CreateNode('F');
	SBTNode* G = SBT_CreateNode('G');

	//Add nodes in the tree.

	A->Left = B;
	B->Left = C;
	B->Right = D;

	A->Right = E;
	E->Left = F;
	E->Right = G;

	//Print Tree
	printf("Preorder...\n");
	SBT_PreorderPrintTree(A);
	printf("\n\n");

	printf("Inorder...\n");
	SBT_InorderPrintTree(A);
	printf("\n\n");

	printf("Postorder...\n");
	SBT_PostorderPrintTree(A);
	printf("\n\n");


}