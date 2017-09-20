#ifndef NODE_H
#define NODE_H
#include "person.h"
class Node
{

public:
	Person data;
	Node *next;
	void printNode();
};
#endif