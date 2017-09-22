#ifndef NODE_H
#define NODE_H
class Node
{

public:
	Node();
	int data;
	int index;
	Node *pLChild;
	Node *pRChild;
	Node *pParent;
	Node *searchNode(int indexNode);
	void deleteNode();
	void preTraverse();
	
	void inOrderTraverse();
	void postTraverse();
};

#endif