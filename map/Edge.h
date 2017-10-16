#ifndef EDGE_H
#define EDGE_H
class Edge
{

public:
	Edge(int nodeIndexA=0,int nodeIndexb=0,int weightValue=0);
	int m_nodeIndexA;
	int m_nodeIndexB;
	int m_iWeight; 
	bool m_bSelected;
};
#endif