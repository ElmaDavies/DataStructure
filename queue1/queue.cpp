#include<iostream>
#include "myQueue.h"
#include"stdlib.h"
#include "customer.h"
using namespace std;
/************************************************************************/
/* ���ζ��е�ʵ��
*/
/************************************************************************/

int main()
{

	
	myQueue *p = new myQueue(4);
	Customer person("����",20);
	p->enQueue(person);
	Customer persorn("����",23);
	p->enQueue(persorn);
	p->queueTrave();
	//����Ԫ��
	/*
	p->enQueue(12);
	p->enQueue(13);
	p->enQueue(14);
	p->enQueue(15);
	p->queueTrave();

    //ɾ��Ԫ��
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
		cout<<"��������"<<endl;

	}else
	{
		cout<<"����δ��"<<endl;
	}
	p->queueTrave();
	p->clearQueue();
	if(p->queueEmpty())
	{
		cout<<"�ն��У�"<<endl;

	}
	p->enQueue(23);
	p->enQueue(24);
	cout<<"���г����ǣ�"<<p->queueLength()<<endl;
	delete []p;
	p = NULL;
	*/
	system("pause");
	return 0;
}