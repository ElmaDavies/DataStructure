#ifndef LIST_H
#define LIST_H
#include <iostream>
#include "Cordinate.h"

class List
{

public:
	List(int size); //链表初始化
	~List();
	void listClear(); //清空链表
	bool listEmpty(); //判断链表是否为空
	bool listFull(); //判断链表是否已满
	int getLength(); //获取当前链表长度
	bool getElement(int i,Cordinate *element); //获取链表指定元素
	int getLocatedElement(Cordinate *element); //获取当前链表元素的位置
	bool getPreElement(Cordinate *currentElement,Cordinate *preElement); //获取当前元素的前一个元素
	bool getNextElement(Cordinate *currentElement,Cordinate *nextElement); //获取当前元素的后一个元素
	void listTrave(); //遍历链表
	bool listInsert(int i,Cordinate *element); //插入元素
	bool listDelete(int i,Cordinate *element); //删除元素
private: 
    Cordinate *m_pList;   //链表指针
	int m_iSize;    //生成的链表长度
	int m_iLength; //当前链表长度
};

#endif