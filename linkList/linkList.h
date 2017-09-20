#ifndef LINKLIST_H
#define LINKLIST_H
#include "Node.h"
class linkList
{

public:
	linkList();
	~linkList();
	void clearLinkList();
	bool linkListEmpty();
	int getLinkListLength();
	bool getElement(int i,Node *pNode);
	int  getLocateElement(Node *pNode);
	bool preNodeElement(Node *pcurrentNode,Node *preNode);
	bool nextNodeElement(Node *pcurrentNode,Node *nextNode);
	void listTraverse();
	bool insertElement(Node *element);
	bool insertList(int i,Node *element); //在链表任意位置插入元素
	bool deleteElement(int i,Node *element);
	bool insertHead(Node *element);
	bool insertTail(Node *element);
private:
    Node *pList;
	int m_iLength;







};


#endif