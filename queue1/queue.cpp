#include<iostream>
#include "myQueue.h"
#include"stdlib.h"
#include "customer.h"
using namespace std;
/************************************************************************/
/* 环形队列的实现
*/
/************************************************************************/

int main()
{

	
	myQueue *p = new myQueue(4);
	Customer person("张三",20);
	p->enQueue(person);
	Customer persorn("李四",23);
	p->enQueue(persorn);
	p->queueTrave();
	//插入元素
	/*
	p->enQueue(12);
	p->enQueue(13);
	p->enQueue(14);
	p->enQueue(15);
	p->queueTrave();

    //删除元素
	int element = 0;
	p->deQueue(element);
	cout<<endl;
	cout<<element<<endl;
	p->deQueue(element);
	cout<<endl;
	cout<<element<<endl;
	
   
	p->queueTrave();
	p->enQueue(20);
	p->enQueue(18);
	if(p->queueFull())
	{
		cout<<"队列已满"<<endl;

	}else
	{
		cout<<"队列未满"<<endl;
	}
	p->queueTrave();
	p->clearQueue();
	if(p->queueEmpty())
	{
		cout<<"空队列！"<<endl;

	}
	p->enQueue(23);
	p->enQueue(24);
	cout<<"队列长度是："<<p->queueLength()<<endl;
	delete []p;
	p = NULL;
	*/
	system("pause");
	return 0;
}