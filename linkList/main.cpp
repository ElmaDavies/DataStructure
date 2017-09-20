#include "linkList.h"
#include "Node.h"
#include <iostream>
using namespace std;
void creatUser(linkList *pList)
{
	Node node;
	Person person;
	cout<<"请输入用户名：";
	cin>>node.data.name;
	cout<<endl;
	cout<<"请输入电话号码：";
	cin>>node.data.number;
	pList->insertElement(&node);
}
bool deleteUser(linkList *pList)
{
	Person person;
	Node node;
	int count = 0;
	cout<<"请输入要删除的序号"<<endl;
	cin>>count;
	int length = pList->getLinkListLength();
	if (count>length||count<0)
	{
		cout<<"用户序号不存在,请重新尝试"<<endl;
		return false;
	}
	
	
	pList->deleteElement(count,&node);
	return true;
}
int menu()
{
	
	cout<<"新建联系人:1"<<endl;
	cout<<"删除联系人:2"<<endl;
	cout<<"浏览通讯录:3"<<endl;
	cout<<"退出通讯录:4"<<endl;
	cout<<"请输入操作指令：";
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
	/*             通讯录实践                                               */
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
			cout<<"用户当前操作为：新建联系人"<<endl;
		   creatUser(list1);
		
		break;
		 
		case 2:
			cout<<"用户当前操作为：删除联系人"<<endl;
		    deleteUser(list1);
			
		break;
		case 3:
			cout<<"用户当前操作为：浏览通讯录"<<endl;
			list1->listTraverse();
			
			break;
		case 4:
			cout<<"用户当前操作为：退出通讯录"<<endl;
			
		break;
		default:
			cout<<"用户输入指令错误,请重新输入"<<endl;
		
			break;





		}
		
		
	}
	
	delete list1;
	list1 = NULL;
	system("pause");
	return 0;
}

