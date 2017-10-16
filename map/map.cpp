#include "map.h"
#include<iostream>

#include <vector>
using namespace std;

Map::Map(int Capacity)
{
	m_iCapacity = Capacity;
	m_iCountNode = 0;
	m_pNodeArrray = new Node[m_iCapacity];
	m_pMartix = new int[m_iCapacity*m_iCapacity];
	memset(m_pMartix,0,m_iCapacity*m_iCapacity*sizeof(int));
	m_pEdge = new Edge[m_iCapacity-1]; //用来存放边，且边的个数等于顶点个数减一

}

Map::~Map()
{

	delete []m_pNodeArrray;
	delete []m_pMartix;
	delete []m_pEdge;
}

bool Map::addNode(Node *pNode)
{
	if(pNode==NULL)
	{
		return false;
	}
	m_pNodeArrray[m_iCountNode].m_data = pNode->m_data;
	m_iCountNode++;
	return true;

}

void Map::resetNode()
{

	for (int i = 0;i<m_iCountNode;i++)
	{
		m_pNodeArrray[i].m_bIsVIstied = false;
	}
}

bool Map::setValueToMartixForDirectGraph(int row,int col,int val)
{
	if (row<0||row>=m_iCapacity)
	{
		return false;
	}
	if (col<0||col>=m_iCapacity)
	{
		return false;
	}
	m_pMartix[row*m_iCapacity+col] = val;


	return true;
}

bool Map::setValueToMartixForUndirectGraph(int row,int col,int val)
{
	if (row<0||row>=m_iCapacity)
	{
		return false;
	}
	if (col<0||col>=m_iCapacity)
	{
		return false;
	}
//	m_pMartix[row*m_iCapacity+col] = val;

	m_pMartix[row*m_iCapacity+col] = val;
	m_pMartix[col*m_iCapacity+row] = val;
	return true;

}
void Map::printMartix()
{

	for (int i = 0;i<m_iCapacity;i++)
	{
		for (int k = 0;k<m_iCapacity;k++)
		{
			cout<<m_pMartix[i*m_iCapacity+k]<<" ";
		}
		cout<<endl;
	}
}
bool Map::getValueFromMartix(int row,int col,int &val)
{
	if (row<0||row>=m_iCapacity)
	{
		return false;
	}
	if (col<0||col>=m_iCapacity)
	{
		return false;
	}
	val = m_pMartix[m_iCapacity*row+col];
	return true;

}

void Map::deepthFirstTraverse(int nodeIndex)
{
	int value = 0;
	cout<<m_pNodeArrray[nodeIndex].m_data<<" ";
	m_pNodeArrray[nodeIndex].m_bIsVIstied = true;
	for (int i=0;i<m_iCapacity;i++)
	{
		getValueFromMartix(nodeIndex,i,value);
		if (value==1)
		{
			if (m_pNodeArrray[i].m_bIsVIstied)
			{
				continue;
			}else
			{

				deepthFirstTraverse(i);
			}
		}else
		{
			continue;
		}
	}

}

void Map::breadthFirstTraverse(int nodeIndex)
{

	cout<<m_pNodeArrray[nodeIndex].m_data << " ";
	m_pNodeArrray[nodeIndex].m_bIsVIstied = true;
	vector<int> curVec;
	curVec.push_back(nodeIndex);
	breadthFirstTraverseImp(curVec);
}

void Map::breadthFirstTraverseImp(vector<int> preVec)
{

	int value = 0;
	vector<int> curVec;
	for (int j=0;j<(int)preVec.size();j++)
	{
		for (int i=0;i<m_iCapacity;i++)
		{
			getValueFromMartix(preVec[j],i,value);
			if (value!=0)
			{
			   if (m_pNodeArrray[i].m_bIsVIstied)
			   {
				   continue;
			   }else
			   {

				   cout<<m_pNodeArrray[i].m_data<<" ";
				   m_pNodeArrray[i].m_bIsVIstied=true;
				   curVec.push_back(i);
			   }
			}
		}
	}
	if (curVec.size()==0)
	{
		return;
	}else
	{
		breadthFirstTraverseImp(curVec);
	}
}

void Map::primTree(int nodeIndex)
{
	int edgeCount = 0;
	vector<int> nodeVec;
	vector<Edge> curEdge;
	int value = 0;
	cout<<m_pNodeArrray[nodeIndex].m_data<<endl;
	nodeVec.push_back(nodeIndex);
	m_pNodeArrray[nodeIndex].m_bIsVIstied = true;
	
	while(edgeCount<m_iCapacity-1)
	{

		int temp = nodeVec.back();
		for (int i=0;i<m_iCapacity;i++)
		{
			getValueFromMartix(temp,i,value);
			if (value!=0)
			{
				if (m_pNodeArrray[i].m_bIsVIstied)
				{
					continue;
				}else
				{
					Edge edge(temp,i,value);
					curEdge.push_back(edge);


				}

			}
		}
		//从可选边中选出最小权值的边
		
		int edgeIndex = getMinEdge(curEdge);
		curEdge[edgeIndex].m_bSelected = true;
		cout<<curEdge[edgeIndex].m_nodeIndexA<<"----"<<curEdge[edgeIndex].m_nodeIndexB;
		cout<<"=="<<curEdge[edgeIndex].m_iWeight<<endl;

		m_pEdge[edgeCount] = curEdge[edgeIndex];
		edgeCount++;
		int nextEdgeNode = curEdge[edgeIndex].m_nodeIndexB;
		nodeVec.push_back(edgeIndex);
		m_pNodeArrray[nextEdgeNode].m_bIsVIstied = true;
		cout<<m_pNodeArrray[nextEdgeNode].m_data<<endl;
	}
	
}

int Map::getMinEdge(vector<Edge> edgeVec)
{
	int minWeighValue = 0;
	int i = 0;
	int edgeIndex = 0;
	for (;i<(int)edgeVec.size();i++)
	{
		if (!edgeVec[i].m_bSelected)
		{
			minWeighValue=edgeVec[i].m_iWeight;
			edgeVec[i].m_iWeight = true;
			edgeIndex = i;
		    break;
		}
		
		
	}
	if (minWeighValue==0)
	{
		return -1;
	}
	for (i;i<(int)edgeVec.size();i++)
	{
		if (edgeVec[i].m_bSelected)
		{
			continue;
		}else
		{
			if (edgeVec[i].m_iWeight<minWeighValue)
			{
				minWeighValue = edgeVec[i].m_iWeight;
				edgeIndex = i;
			}
		}

	}
	return edgeIndex;
}

void Map::kurTree()
{

	vector<vector <int>> nodeSets;
	int edeCount = 0;
	int value = 0;
	vector<Edge> vecEdge;
	for (int i=0;i<m_iCapacity;i++)
	{
		for (int k = i+1;k <m_iCapacity;k++)
		{
			getValueFromMartix(i,k,value);
			if (value!=0)
			{
				Edge edge(i,k,value);
			    vecEdge.push_back(edge);

			}else
			{

				continue;
			}
		}
	}

	while(edeCount<m_iCapacity-1)
	{
		int minEdgeIndex = getMinEdge(vecEdge);
		vecEdge[minEdgeIndex].m_bSelected = true;
		int nodeIndexA = vecEdge[minEdgeIndex].m_nodeIndexA;
		int nodeIndexB = vecEdge[minEdgeIndex].m_nodeIndexB;

		bool nodeASet = false;
		bool nodeBSet =  false;

		int nodeALabel = -1;
		int nodeBLabel = -1;

		for (int i=0;i<(int)nodeSets.size();i++)
		{
			nodeASet = isInSet(nodeSets[i],nodeIndexA);
			if(nodeASet)
			{
				nodeALabel = i;
			}
		}
		for (int i=0;i<(int)nodeSets.size();i++)
		{
			nodeBSet = isInSet(nodeSets[i],nodeIndexB);
			if(nodeBSet)
			{
				nodeBLabel = i;
			}
		}

		if (nodeBLabel == -1&&nodeALabel==-1)
		{
			vector<int> vec;
			vec.push_back(nodeIndexA);
			vec.push_back(nodeIndexB);
			nodeSets.push_back(vec);
		}
		else if(nodeALabel == -1 && nodeBLabel!=-1)
		{
			nodeSets[nodeBLabel].push_back(nodeIndexA);
		}
		else if(nodeALabel != -1 && nodeBLabel==-1)
		{
			nodeSets[nodeALabel].push_back(nodeIndexB);
		}
		else if(nodeALabel!=-1&&nodeBLabel != -1 && nodeBLabel != nodeALabel)
		{
			merageNodeSet(nodeSets[nodeALabel],nodeSets[nodeBLabel]);
			for (int k = nodeALabel;k<(int)nodeSets.size();k++)
			{
				nodeSets[k] = nodeSets[k+1];
			}
		}
		//形成环
		else if(nodeALabel!=-1&&nodeBLabel != -1 && nodeBLabel == nodeALabel)
		{
			continue;
		}
		m_pEdge[edeCount] = vecEdge[minEdgeIndex];
		edeCount++;
		cout<<vecEdge[minEdgeIndex].m_nodeIndexA<<"---"<<vecEdge[minEdgeIndex].m_nodeIndexB<<" ";
		cout<<vecEdge[minEdgeIndex].m_iWeight<<endl;
	}
	

}

bool Map::isInSet(vector<int> nodeSet,int target)
{
	for(int i = 0;i<(int)nodeSet.size();i++)
	{
		if (nodeSet[i] == target)
		{
			return true;
		}
	}
	return false;
}

void Map::merageNodeSet(vector<int> &nodeA,vector<int> nodeB)
{

	for (int i = 0;i<(int)nodeB.size();i++)
	{
		nodeA.push_back(nodeB[i]);
	}
}