#include "stack.h"
#include<iostream>
#include "Cordinate.h"
using namespace std;

#define BIN 2;
#define OCT 8;
#define HEX 16;
int main()
{
	/************************************************************************/
	/* 栈模板的应用                                                                     */
	/************************************************************************/
	/*
	Stack<Cordinate> * pStack = new Stack<Cordinate>(5);
	pStack->push(Cordinate(1,3));
	pStack->push(Cordinate(4,5));
	*/
	/************************************************************************/
	/* 
	利用栈进行进制转化                                                                     */
	/*
	Stack<int> *pStack = new Stack<int>(30);
	char num[] = "0123456789ABCDEF";
	int mod = 0;
	int N = 2014;
	while(N!=0)
	{
		mod = N% HEX;
		pStack->push(mod);
		N = N / HEX;
	}

	//十六进制的转化
	while(!pStack->stackEmpty())
	{
		int elem = 0;
		pStack->pop(elem);
		cout<<num[elem];
	}
	/*
	if(pStack->stackEmpty())
	{
		cout<<"栈为空"<<endl;
	}
	if(pStack->stackFull())
	{
		cout << "栈已满" <<endl;
	}
	
	//p
	//pStack->push('23');
	//pStack->push('23');
	//cout<<pStack->stackLength()<<endl;
	pStack->stackTrave(false);
	//Cordinate p(0,0);
	//pStack->pop(p);
	cout<<endl;
	//pStack->stackTrave(false);
	
	/************************************************************************/
	/************************************************************************/
	/* 栈应用之字符串匹配                                                                     */
	/************************************************************************/
	Stack<char> * pStack = new Stack<char>(30);
	Stack<char> * pNeedStack = new Stack<char>(30);
    char str[] = "[[()]]";
	char currentNeed = 0;
	for(int i = 0;i<strlen(str);i++)
	{
		
		if (str[i]!= currentNeed)
		{
			pStack->push(str[i]);
			switch(str[i])
			{
				
			case '(':
				if (currentNeed!=0)
				{
					pNeedStack->push(currentNeed);
				}
				currentNeed = ')';
				break;
			case '[':
				if (currentNeed!=0)
				{
					pNeedStack->push(currentNeed);
				}
				currentNeed = ']';
				break;
			default:
				cout <<"字符串括号不匹配"<<endl;
				system("pause");
				return 0;
				
			}
		}else
		{
			char elem;
			pStack->pop(elem);
			if(!pNeedStack->pop(currentNeed))
			{
				currentNeed = 0;
			}
		}
	}
	if (pStack->stackEmpty())
	{
		cout<<"字符串括号匹配"<<endl;
	}else
	{
		cout <<"字符串括号不匹配"<<endl;
	}
	delete pNeedStack;
	pNeedStack = NULL;
	delete pStack;
	pStack = NULL;
	
	system("pause");
	return 0;
}