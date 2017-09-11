#include <iostream>
#include "List.h"
#include "Cordinate.h"
using namespace std;
List::List(int size)
{
	m_iSize = size;
	m_pList = new Cordinate[m_iSize];
	m_iLength = 0;
}

List::~List()
{
	delete []m_pList;
	m_pList = NULL;
}
void List::listClear()
{
	m_iSize = 0;
	m_iLength = 0;
}
bool List::listEmpty()
{
	if (m_iLength==0)
	{
		return true;
	}else
	{
		return false;
	}
}

bool List::listFull()
{
	if(m_iLength==m_iSize)
	{
		return true;
	}
	return false;
}

int List::getLength()
{

	return m_iLength;
}
bool List::getElement(int i,Cordinate *element)
{
	if (i<0||i>m_iLength)
	{
		return false;
	}
	*element  = m_pList[i];
	return true;
}

int List::getLocatedElement(Cordinate *element)
{
	for(int i = 0;i<m_iLength;i++)
	{
		if(*element == m_pList[i])
		{
			return i;
		}
	}
}

bool List::getPreElement(Cordinate *currentElement,Cordinate *preElement)
{
	int temp = getLocatedElement(currentElement);
	if(temp==-1)
	{
		return false;
	}else
	{
		if (temp==0)
		{
			return false;
		}else
		{
		   *preElement = m_pList[temp-1];
		}
	}
	return true;

}

bool List::getNextElement(Cordinate *currentElement,Cordinate *nextElement)
{
	int temp = getLocatedElement(currentElement);
	if (temp == -1)
	{
		return false;
	}else
	{
		if (temp == m_iLength-1)
		{
			return false;
		}else
		{
			*nextElement = m_pList[temp+1];
		}
		return true;
	}

}

void List::listTrave()
{
	for (int i=1;i<m_iLength;i++)
	{
		cout<<m_pList[i-1]<<"->";
	}
	cout << m_pList[m_iLength-1]<<endl;
}

bool List::listInsert(int i,Cordinate *element)
{
	
	if (i<0||i>m_iLength)
	{
		return false;
	}

	for (int j = m_iLength-1;j>=i;j--)
	{
		m_pList[j+1] = m_pList[j];

	}
	m_pList[i] = *element;
	m_iLength++;
	return true;
}
bool List::listDelete(int i,Cordinate *element)
{
	
	if (i<0||i>=m_iLength)
	{
		return false;
	}
	*element = m_pList[i];
	for (int j= i+1;j<=m_iLength;j++)
	{
		m_pList[j-1] = m_pList[j]; 
	}
	m_iLength--;
	return true;
}