#ifndef LINKTREE_H
#define LINKTREE_H
#include "Node.h"
class linkTree
{

public:
	linkTree();
	~linkTree();
	Node *searchNode(int indexNode);
	bool addNode(int indexNode,int  direction,Node *pNode);
	bool deleteNode(int indexNode,Node *pNode);
	void preTraverse();
	void inOrderTraverse();
	void postTraverse();
private:
	Node *m_pRoot;

};
#endif LINKTREE_H


