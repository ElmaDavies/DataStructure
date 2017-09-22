#include "Node.h"
#include <iostream>
using namespace std;
Node::Node()
{

	index = 0;
	data = 0;
	pRChild = NULL;
	pLChild = NULL;
	pParent = NULL;
}

Node * Node::searchNode(int indexNode)
{
	Node *temp = NULL;
	if (this->index==indexNode)
	{
		return this;
	}
	if (this->pLChild!=NULL)
	{
		if (this->pLChild->index==indexNode)
		{
			return pLChild;
		}else
		{

			temp = this->pLChild->searchNode(indexNode);
			if (temp!=NULL)
			{
				return temp;
			}
		}
	}
	if (this->pRChild!=NULL)
	{
		if (this->pRChild->index==indexNode)
		{
			return pRChild;
		}else
		{
			temp = this->pRChild->searchNode(indexNode);
			if (temp!=NULL)
			{
				return temp;
			}
		}
	}
	if (this->pParent!=NULL)
	{
		if (this->pParent->index==indexNode)
		{
			return pParent;
		}
	}
	
	return NULL;
}

void Node::deleteNode()
{

	if (this->pLChild!=NULL)
	{
		this->pLChild->deleteNode();
	}
	if (this->pRChild!=NULL)
	{
		this->pRChild->deleteNode();
	}
	if (this->pParent!=NULL)
	{
		if (this->pParent->pLChild==this)
		{
			this->pParent->pLChild=NULL;
		}
		if (this->pParent->pRChild==this)
		{
			this->pParent->pRChild=NULL;
		}
	}
    delete this;
}

void Node::preTraverse()
{
	cout<<this->index<<"-"<<this->data<<endl;
	if (this->pLChild!=NULL)
	{
		this->pLChild->preTraverse();
	}

	
	if (this->pRChild!=NULL)
	{
		this->pRChild->preTraverse();
	}


}

void Node::postTraverse()
{
	if (this->pLChild!=NULL)
	{
		this->pLChild->postTraverse();
	}

	
	if (this->pRChild!=NULL)
	{
		this->pRChild->postTraverse();
	}
	cout<<this->index<<"-"<<this->data<<endl;
	
}
void Node::inOrderTraverse()
{
	if (this->pLChild!=NULL)
	{
		this->pLChild->inOrderTraverse();
	}

	cout<<this->index<<"-"<<this->data<<endl;
	if (this->pRChild!=NULL)
	{
		this->pRChild->inOrderTraverse();
	}
	

}