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
	bool addNode(Node *pNode); //��ӽڵ�
	void resetNode();          //���ýڵ�
	bool setValueToMartixForDirectGraph(int row,int col,int val=1); //����Ϊ����ͼ
	bool setValueToMartixForUndirectGraph(int row,int col,int val=1); //����Ϊ����ͼ
	void printMartix(); //��ӡ�ڽӾ���
	void deepthFirstTraverse(int nodeIndex);//������ȱ���
	void breadthFirstTraverse(int nodeIndex); //������ȱ���
	void primTree(int indexNode); //����ķ�㷨
	void kurTree(); //��Ŭ˹�����㷨
private:
	bool getValueFromMartix(int row,int col, int &val); //���ڽӾ����л��ֵ
	void breadthFirstTraverseImp(vector<int> preVec); //������ȱ���
	
	int getMinEdge(vector<Edge> edgeVec);
	bool isInSet(vector<int> nodeSet,int target); //�ж��������Ƿ��ڼ�����
	void merageNodeSet(vector<int> &nodeA,vector<int> nodeB);//�ϲ���������
private:
	int m_iCapacity; //ͼ�����Ķ���ĸ���
	int m_iCountNode; //ʵ�ʶ���ĸ���
	Node *m_pNodeArrray; //��������
	int *m_pMartix; //�ڽӾ���
	Edge *m_pEdge; //������űߵ�ָ��

};