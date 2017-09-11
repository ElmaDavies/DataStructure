#include <iostream>
#include "List.h"
using namespace std;
#include "Cordinate.h"
int main()
{
	List* list1 = new List(10);
	Cordinate e1(1,2);
	Cordinate e2(3,4);
	Cordinate e3(5,6);
    Cordinate e4(7,8);
	Cordinate e5(9,10);
	
	//int temp = 0;
	
	list1->listInsert(0,&e1);
	list1->listInsert(1,&e2);
	list1->listInsert(2,&e3);
	list1->listInsert(3,&e4);
	list1->listInsert(4,&e5);
	//list1->listDelete(3,&temp);
	//list1->getElement(1,&temp);
	//cout<<"---------"<<temp<<"---------"<<endl;
	//temp = 5;
	//cout <<"locate is£º"<<list1->getLocatedElement(&temp)<<endl;
	//int preElement=0;
	//list1->getPreElement(&e4,&preElement);
	//cout<<"the pre  element  of e4 is:"<<preElement<<endl;
	//int nextElement = 0;
	//list1->getNextElement(&e4,&nextElement);
	//cout<<"the next element of  e4 is:"<<nextElement<<endl;
	if (list1->listFull())
	{
		cout<<"list is full"<<endl;
	}
	//cout<<"------"<<temp<<"------"<<endl;
	cout<<"------"<<list1->getLength()<<"-------"<<endl;
	list1->listTrave();
	list1->listClear();
	cout<<"------"<<list1->getLength()<<"-------"<<endl;
	
	if (list1->listEmpty())
	{
		cout<<"list is empty"<<endl;
	}
	delete list1;
	system("pause");
	return 0;
}