#ifndef LIST_H
#define LIST_H
#include <iostream>
#include "Cordinate.h"

class List
{

public:
	List(int size); //�����ʼ��
	~List();
	void listClear(); //�������
	bool listEmpty(); //�ж������Ƿ�Ϊ��
	bool listFull(); //�ж������Ƿ�����
	int getLength(); //��ȡ��ǰ������
	bool getElement(int i,Cordinate *element); //��ȡ����ָ��Ԫ��
	int getLocatedElement(Cordinate *element); //��ȡ��ǰ����Ԫ�ص�λ��
	bool getPreElement(Cordinate *currentElement,Cordinate *preElement); //��ȡ��ǰԪ�ص�ǰһ��Ԫ��
	bool getNextElement(Cordinate *currentElement,Cordinate *nextElement); //��ȡ��ǰԪ�صĺ�һ��Ԫ��
	void listTrave(); //��������
	bool listInsert(int i,Cordinate *element); //����Ԫ��
	bool listDelete(int i,Cordinate *element); //ɾ��Ԫ��
private: 
    Cordinate *m_pList;   //����ָ��
	int m_iSize;    //���ɵ�������
	int m_iLength; //��ǰ������
};

#endif