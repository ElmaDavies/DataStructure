#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
#include<string>
using namespace std;
class Customer
{

public:
	Customer(){};
	Customer(string name,int age);
	void printinfo() const;
private:
	string m_strName;
	int m_iage;

};
#endif
