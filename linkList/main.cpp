#include "linkList.h"
#include "Node.h"
#include <iostream>
using namespace std;
void creatUser(linkList *pList)
{
	Node node;
	Person person;
	cout<<"�������û�����";
	cin>>node.data.name;
	cout<<endl;
	cout<<"������绰���룺";
	cin>>node.data.number;
	pList->insertElement(&node);
}
bool deleteUser(linkList *pList)
{
	Person person;
	Node node;
	int count = 0;
	cout<<"������Ҫɾ�������"<<endl;
	cin>>count;
	int length = pList->getLinkListLength();
	if (count>length||count<0)
	{
		cout<<"�û���Ų�����,�����³���"<<endl;
		return false;
	}
	
	
	pList->deleteElement(count,&node);
	return true;
}
int menu()
{
	
	cout<<"�½���ϵ��:1"<<endl;
	cout<<"ɾ����ϵ��:2"<<endl;
	cout<<"���ͨѶ¼:3"<<endl;
	cout<<"�˳�ͨѶ¼:4"<<endl;
	cout<<"���������ָ�";
	int order=0;
	cin>>order;
	return order;
}
int main()
{
	//Node node1;
	//Node node2;
	//Node node3;
	//Node node4;
	//Node temp;
	//node2.data = 4;
	//node1.data = 3;
	//node3.data = 5;
	//node4.data = 6;
	//temp.data = 0;
	//int count = 0;
	
	///*list1->insertElement(&node1);
	//list1->insertElement(&node2);
	//list1->insertElement(&node3);*/
	//list1->insertTail(&node1);
	//list1->insertTail(&node2);
	//list1->insertTail(&node3);
	//list1->insertList(2,&node4);
	////list1->deleteElement(1,&temp);
	////cout<<"delete element is-------------:"<<temp.data<<"-----------"<<endl;
	//list1->getElement(2,&temp);
	//cout<<"get element is:========="<<temp.data<<"=============="<<endl;
	//list1->preNodeElement(&node4,&temp);
	//cout<<"pre element is:+++++++++++++++++++"<<temp.data<<"+++++++++++++"<<endl;
	//list1->nextNodeElement(&node3,&temp);
	//cout<<"next element is<<<<<<<<<<<<<<"<<temp.data<<">>>>>>>>>>>>>"<<endl;
	//count = list1->getLocateElement(&node3);
	//cout << "count is" <<count<<endl;
	/************************************************************************/
	/*             ͨѶ¼ʵ��                                               */
	/************************************************************************/
	
	linkList *list1  = new linkList();
	//menu();
	int userOrder=0;
	
	while(userOrder!=4)
	{
		userOrder = menu();
		
		switch(userOrder)
		{
		case 1:
			cout<<"�û���ǰ����Ϊ���½���ϵ��"<<endl;
		   creatUser(list1);
		
		break;
		 
		case 2:
			cout<<"�û���ǰ����Ϊ��ɾ����ϵ��"<<endl;
		    deleteUser(list1);
			
		break;
		case 3:
			cout<<"�û���ǰ����Ϊ�����ͨѶ¼"<<endl;
			list1->listTraverse();
			
			break;
		case 4:
			cout<<"�û���ǰ����Ϊ���˳�ͨѶ¼"<<endl;
			
		break;
		default:
			cout<<"�û�����ָ�����,����������"<<endl;
		
			break;





		}
		
		
	}
	
	delete list1;
	list1 = NULL;
	system("pause");
	return 0;
}

