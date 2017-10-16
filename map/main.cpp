#include "map.h"

#include <iostream>
using namespace std;
/************************************************************************/
/*
邻接矩阵
0 1 0 1 0 0 0 0
1 0 1 0 0 1 0 0
0 1 0 0 1 0 0 0
1 0 0 0 0 0 1 1
0 0 1 0 0 1 0 0
0 1 0 0 1 0 0 0
0 0 0 1 0 0 0 1
0 0 0 1 0 0 1 0   



       A
	 /  \
    B    D
   / \  / \
  C  F G - H
  \  /
   E
 */  
/************************************************************************/



int main()
{
	/*图的验证代码
	Map *pMap = new Map(8);
	Node *pNodeA = new Node('A');
	Node *pNodeB = new Node('B');
	Node *pNodeC = new Node('C');
	Node *pNodeD = new Node('D');
	Node *pNodeE = new Node('E');
	Node *pNodeF = new Node('F');
	Node *pNodeG = new Node('G');
	Node *pNodeH = new Node('H');

	pMap->addNode(pNodeA);
    pMap->addNode(pNodeB);
	pMap->addNode(pNodeC);
	pMap->addNode(pNodeD);
	pMap->addNode(pNodeE);
	pMap->addNode(pNodeF);
    pMap->addNode(pNodeG);
	pMap->addNode(pNodeH);

	pMap->setValueToMartixForUndirectGraph(0,1);
	pMap->setValueToMartixForUndirectGraph(0,3);
	pMap->setValueToMartixForUndirectGraph(1,2);
	pMap->setValueToMartixForUndirectGraph(1,5);
	pMap->setValueToMartixForUndirectGraph(3,6);
	pMap->setValueToMartixForUndirectGraph(3,7);
	pMap->setValueToMartixForUndirectGraph(6,7);
	pMap->setValueToMartixForUndirectGraph(2,4);
	pMap->setValueToMartixForUndirectGraph(4,5);
	pMap->printMartix();
	cout<<endl << "============深度优先遍历=============" <<endl;
	pMap->deepthFirstTraverse(0);
	pMap->resetNode();
	cout<<endl<< "=============广度优先遍历============="<<endl;
	
	pMap->breadthFirstTraverse(0);
	cout<<endl;
	*/
	/************************************************************************/
	/* 最小生成树验证代码                                                                     */
	/************************************************************************/
	Map *pMap = new Map(6);
	Node *pNodeA = new Node('A');
	Node *pNodeB = new Node('B');
	Node *pNodeC = new Node('C');
	Node *pNodeD = new Node('D');
	Node *pNodeE = new Node('E');
	Node *pNodeF = new Node('F');
	pMap->addNode(pNodeA);
	pMap->addNode(pNodeB);
	pMap->addNode(pNodeC);
	pMap->addNode(pNodeD);
	pMap->addNode(pNodeE);
	pMap->addNode(pNodeF);
	pMap->setValueToMartixForUndirectGraph(0,1,6);
	pMap->setValueToMartixForUndirectGraph(0,4,5);
	pMap->setValueToMartixForUndirectGraph(0,5,1);
	pMap->setValueToMartixForUndirectGraph(1,2,3);
	pMap->setValueToMartixForUndirectGraph(1,5,2);
	pMap->setValueToMartixForUndirectGraph(2,5,8);
	pMap->setValueToMartixForUndirectGraph(2,3,7);
	pMap->setValueToMartixForUndirectGraph(3,5,4);
	pMap->setValueToMartixForUndirectGraph(3,4,2);
	pMap->setValueToMartixForUndirectGraph(4,5,9);

	//pMap->primTree(0);
	pMap->kurTree();
	system("pause");
	return 0;
}