#include "myQueue.h"
#include <iostream>

#include "Customer.h"
using namespace std;
myQueue::myQueue(int queueCapacity)
{

	m_queueCapacity = queueCapacity;
	
	m_pqueue = new Customer[m_queueCapacity];
	clearQueue();


	
}
myQueue::~myQueue()
{

	delete []m_pqueue;
	m_pqueue = NULL;

}
void myQueue::clearQueue()
{
	iHead = 0;
	iTail = 0;
	m_iqueue = 0;
}
bool myQueue::queueEmpty()const
{

	if(m_iqueue==0)
	{

		return true;
	}else
	{

		return false;
	}
}
bool myQueue::queueFull() const
{

	if(m_iqueue==m_queueCapacity)
	{
		return true;
	}
	return false;
}
int myQueue::queueLength() const{

	return m_iqueue;
}

bool myQueue::enQueue(Customer element)
{
	if(queueFull())
	{
		return false;
	}else
	{
		m_pqueue[iTail]=element;
		iTail++;
		m_iqueue++;
		/*
		  取余操作防止队列溢出，例iTail==4时，iTail == 0，又回到了环形队列的
		  队尾
		*/
		iTail = iTail%m_queueCapacity; 
		return true;

	}

}
bool myQueue::deQueue(Customer &element)
{
	if(queueEmpty())
	{
		return true;
	}else
	{
		element = m_pqueue[iHead];
		iHead++;
		m_iqueue--;
		iHead = iHead % m_queueCapacity;
		return true;

	}

}

void myQueue::queueTrave()
{
	cout<<endl;
	for(int i=iHead;i<(m_iqueue+iHead);i++) //保证遍历时的环形队列的长度是4
	{
		m_pqueue[i%m_queueCapacity].printinfo();
	}
	cout<<endl;
}