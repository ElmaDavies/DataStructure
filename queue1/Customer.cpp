#include "Customer.h"
#include <iostream>
#include<string>
using namespace std;

Customer::Customer(string name,int age)
{

	m_strName = name;
	m_iage = age;

}
void Customer::printinfo()const
{

	cout<<"�����ǣ�"<<m_strName<<endl;
	cout<<"�����ǣ�"<<m_iage<<endl;
	cout<<endl;
}