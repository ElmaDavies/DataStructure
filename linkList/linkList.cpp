#include "linkList.h"
#include "Node.h"
#include <iostream>
using namespace std;

linkList::linkList()
{
	pList = new Node;
	pList->data ;
	pList->next = NULL;
	m_iLength = 0;

}

bool linkList::linkListEmpty()
{
	if (m_iLength==0)
	{
		return true;
	}else
	{
		return false;
	}
}

int linkList::getLinkListLength()
{
	return m_iLength;

}
void linkList::clearLinkList()
{

	Node *currentNode = pList;
	while((currentNode->next)!=NULL)
	{
		Node *temp = currentNode->next;
		delete temp;
		currentNode = temp;

	}
	pList->next = NULL;
}

linkList::~linkList()
{
	//clearLinkList();
	delete pList;
	pList = NULL;
}

bool linkList::insertElement(Node *element)
{
	Node *temp = pList->next; //生成一个临时节点
	Node *newNode = new Node; 
	if (newNode==NULL)
	{
		return false;
	}
	newNode->data = element->data;
	pList->next = newNode; 
	newNode->next = temp;
	m_iLength++;
	return true;





}

bool linkList::insertTail(Node *element)
{
	Node *currentElement = pList;
	while(currentElement->next!=NULL)
	{
		currentElement = currentElement->next;
	}
	Node *newNode = new Node;
	if (newNode==NULL)
	{
		return false;
	}
	newNode->data = element->data;
	newNode->next = NULL;
	currentElement->next =newNode; //倒数第二个节点指向最后一个节点
	m_iLength++;
	return true;


}

bool linkList::insertList(int i,Node *element)
{
	if (i<0||i>=m_iLength)
	{
		return false;
	}
	Node * currentNdoe  = pList;
	for (int k=0;k<i;k++)
	{
		currentNdoe = currentNdoe->next;
	}
	Node *newNode = new Node;
	if (newNode==NULL)
	{
		return false;
	}
	newNode->data = element->data;
	newNode->next = currentNdoe->next; //i+1个节点复制给新生成的节点
	currentNdoe->next = newNode;       //i-1个节点指向i个节点
	m_iLength++;
	return true;

}

bool linkList::deleteElement(int i,Node *element)
{

	if (i<0||i>=m_iLength)
	{
		return false;
	}

	Node *currentNode = pList;
	Node *currentNodeBefore = NULL;
	for(int k=0;k<=i;k++)
	{
		currentNodeBefore = currentNode; //寻找上一个节点，关键
		currentNode = currentNode->next;
	} 
	currentNodeBefore->next = currentNode->next; //i-1个节点指向第i+1个节点的
	element->data = currentNode->data;
	//delete element;

	m_iLength--;
	return true;

}

bool linkList::getElement(int i,Node *pNode)
{

	if (i<0||i>=m_iLength)
	{
		return false;
	}
	Node *currentNode = pList;
	Node *currentNodeBefore = NULL;
	for(int k=0;k<=i;k++)
	{
		currentNodeBefore = currentNode; //寻找上一个节点，关键
		currentNode = currentNode->next;
	} 

  	pNode->data = currentNode->data;
	return true;

}

int linkList::getLocateElement(Node *pNode)
{
	Node *curremtNode = pList;
	int count = 0;
	while (curremtNode->next!=NULL)
	{
		curremtNode = curremtNode->next;
		if (curremtNode->data==pNode->data)
		{
			return count;


		}
		count++;
	}
	return -1;
}

bool linkList::preNodeElement(Node *pcurrentNode,Node *preNode)
{

	Node *currentNode = pList;
	Node *tempNode  = NULL;
	while(currentNode!=NULL)
	{
		tempNode = currentNode;
		currentNode = currentNode->next;
		if (pcurrentNode->data == currentNode->data)
		{


			if (pcurrentNode = pList)
			{
				return false;
			}

			preNode->data = tempNode->data;
			return true;

		}
		
	}
	return false;

}

bool linkList::nextNodeElement(Node *pcurrentNode,Node *nextNode)
{
	Node *currentNode = pList;

	while (currentNode->next!=NULL)
	{
		currentNode = currentNode->next;
		if (pcurrentNode->data == currentNode->data)
		{
			if (currentNode->next==NULL)
			{
				return false;
			}

			nextNode->data = pcurrentNode->next->data;

			return true;
		}
		
	}
	
	

}
bool linkList::insertHead(Node *element)
{
	Node *currentNode = pList;
	currentNode->data = element->data;
	//currentNode= pList->next;
	m_iLength++;
	return true;

}
void linkList::listTraverse()
{

   Node *currentNode = pList;
   while(currentNode->next!=NULL)
   {
	   currentNode = currentNode->next; 
	   //cout<<currentNode->data<<endl;
	   currentNode->printNode();
	  
	   
   }
    
   }