#include "BinaryTree.h"


SBTNode* SBT_CreateNode(ElementType NewData) {
	SBTNode* NewNode = (SBTNode*)malloc(sizeof(SBTNode));
	
	NewNode->Left = NULL;
	NewNode->Right = NULL;
	NewNode->Data = NewData;

	return NewNode;

}
void SBT_DestroyNode(SBTNode* Node) {
	free(Node);
}
void SBT_DestroyTree(SBTNode* Node) {
	if (Node == NULL)
		return;

	//delete Left sub node. 
	SBT_DestroyTree(Node->Left);
	//delete Right sub node. 
	SBT_DestroyTree(Node->Right);
	//delete root node. 
	SBT_DestroyNode(Node);
}

void SBT_PreorderPrintTree(SBTNode* Node) {
	if (Node == NULL)
		return;
	//Print root node.
	printf("%c ", Node->Data);
	//Print left sub node.
	SBT_PreorderPrintTree(Node->Left);
	//Print right sub node.
	SBT_PreorderPrintTree(Node->Right);
}
void SBT_InorderPrintTree(SBTNode* Node) {
	if (Node == NULL)
		return;

	//Print left sub node.
	SBT_InorderPrintTree(Node->Left);
	//Print root sub node.
	printf("%c ", Node->Data);
	//Print right sub node.
	SBT_InorderPrintTree(Node->Right);

}
void SBT_PostorderPrintTree(SBTNode* Node) {

	if (Node == NULL)
		return;

	//Print left sub node.
	SBT_PostorderPrintTree(Node->Left);
	
	//Print right sub node.
	SBT_PostorderPrintTree(Node->Right);

	//Print root sub node.
	printf("%c ", Node->Data);

}