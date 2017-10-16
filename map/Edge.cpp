#include "Edge.h"
Edge::Edge(int nodeIndexA,int nodeIndexB,int weightValue)
{

	m_nodeIndexA = nodeIndexA;
	m_nodeIndexB = nodeIndexB;
	m_iWeight = weightValue;
	m_bSelected = false;
}