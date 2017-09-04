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

	cout<<"姓名是："<<m_strName<<endl;
	cout<<"年龄是："<<m_iage<<endl;
	cout<<endl;
}