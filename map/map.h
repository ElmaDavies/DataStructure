#include <iostream>
#include "node.h"
#include<vector>
#include "Edge.h"
using namespace std;

class Map
{
public:
	Map(int Capacity); // 
	~Map();
	bool addNode(Node *pNode); //添加节点
	void resetNode();          //重置节点
	bool setValueToMartixForDirectGraph(int row,int col,int val=1); //设置为有向图
	bool setValueToMartixForUndirectGraph(int row,int col,int val=1); //设置为无向图
	void printMartix(); //打印邻接矩阵
	void deepthFirstTraverse(int nodeIndex);//深度优先遍历
	void breadthFirstTraverse(int nodeIndex); //广度优先遍历
	void primTree(int indexNode); //普利姆算法
	void kurTree(); //特努斯卡尔算法
private:
	bool getValueFromMartix(int row,int col, int &val); //从邻接矩阵中获得值
	void breadthFirstTraverseImp(vector<int> preVec); //广度优先遍历
	
	int getMinEdge(vector<Edge> edgeVec);
	bool isInSet(vector<int> nodeSet,int target); //判断两个点是否在集合中
	void merageNodeSet(vector<int> &nodeA,vector<int> nodeB);//合并两个集合
private:
	int m_iCapacity; //图中最多的顶点的个数
	int m_iCountNode; //实际顶点的个数
	Node *m_pNodeArrray; //顶点数组
	int *m_pMartix; //邻接矩阵
	Edge *m_pEdge; //用来存放边的指针

};