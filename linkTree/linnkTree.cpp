#include "linkTree.h"
#include <iostream>
linkTree::linkTree()
{

	m_pRoot = new Node();

}
linkTree::~linkTree()
{

	m_pRoot->deleteNode();
}
Node * linkTree::searchNode(int indexNode)
{

	return m_pRoot->searchNode(indexNode);
}

bool linkTree::addNode(int indexNode,int direction,Node *pNode)
{
	Node *temp = searchNode(indexNode);
	if (temp==NULL)
	{
		return false;
	}
	Node *node = new Node();
	
	node->data = pNode->data;
	node->index = pNode->index;
	node->pParent = temp;
	if (direction==0)
	{
		temp->pLChild = node;
	}
	if (direction==1)
	{
		temp->pRChild = node;

	}

	return true;
}

bool linkTree::deleteNode(int indexNode,Node *pNode)
{
	Node *temp = searchNode(indexNode);
	if (temp==NULL)
	{
		return false;
	}

	pNode->data = temp->data;
	temp->deleteNode();
	return true;
}

void linkTree::preTraverse()
{

	m_pRoot->preTraverse();

}
void linkTree::inOrderTraverse()
{
	m_pRoot->inOrderTraverse();
}

void linkTree::postTraverse()
{
	m_pRoot->postTraverse();
}