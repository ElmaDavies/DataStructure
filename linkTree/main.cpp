#include "Node.h"
#include "linkTree.h"
#include <iostream>
using namespace std;

int main()
{
	linkTree *tree = new linkTree();
	Node *node1 = new Node();
	node1->index = 1;
	node1->data = 1;
	Node *node2 = new Node();
	node2->index = 2;
	node2->data = 2;
	Node *node3 = new Node();
	node3->index = 3;
	node3->data = 3;
	Node *node4 = new Node();
	node4->index = 4;
	node4->data = 4;
	Node *node5 = new Node();
	node5->index = 5;
	node5->data = 5;
	Node *node6 = new Node();
	node6->index =6;
	node6->data = 6;
	tree->addNode(0,0,node1);
	tree->addNode(0,1,node2);
	tree->addNode(1,0,node3);
	tree->addNode(1,1,node4);
	tree->addNode(2,0,node5);
	tree->addNode(2,1,node6);
	tree->preTraverse();
	cout<<"------------ǰ�б����ָ���-----------"<<endl;
	tree->inOrderTraverse();
	cout<<"------------ǰ�б����ָ���-----------"<<endl;
	tree->postTraverse();
	tree->deleteNode(3,node6);
	cout<<"------------ɾ���ָ���-----------"<<endl;
	tree->preTraverse();
	system("pause");
	return 0;
}