#ifndef MYQUEUE_H
#define MYQUEUE_H
#include "Customer.h"

class myQueue
{
   public:
	   myQueue(int queueCapitacy); //创建队列
	   virtual ~myQueue();         //销毁队列
	   void clearQueue();         //清空队列
	   bool queueEmpty() const;   //判断队列是否为空
	   int queueLength() const;  //获取队列长度
	   bool queueFull() const;   //判断队列是否已满
	   bool enQueue(Customer elemnt); //新元素入队
	   bool deQueue(Customer &elemnt); //首元素出队
	   void queueTrave();         //遍历队列元素
private:
	Customer *m_pqueue;  //队列指针
	int m_iqueue;   //队列元素
	int m_queueCapacity;  //队列容积
	int iHead;       //队列头
	int iTail;      //队列尾


};
#endif