#ifndef MYQUEUE_H
#define MYQUEUE_H
#include "Customer.h"

class myQueue
{
   public:
	   myQueue(int queueCapitacy); //��������
	   virtual ~myQueue();         //���ٶ���
	   void clearQueue();         //��ն���
	   bool queueEmpty() const;   //�ж϶����Ƿ�Ϊ��
	   int queueLength() const;  //��ȡ���г���
	   bool queueFull() const;   //�ж϶����Ƿ�����
	   bool enQueue(Customer elemnt); //��Ԫ�����
	   bool deQueue(Customer &elemnt); //��Ԫ�س���
	   void queueTrave();         //��������Ԫ��
private:
	Customer *m_pqueue;  //����ָ��
	int m_iqueue;   //����Ԫ��
	int m_queueCapacity;  //�����ݻ�
	int iHead;       //����ͷ
	int iTail;      //����β


};
#endif