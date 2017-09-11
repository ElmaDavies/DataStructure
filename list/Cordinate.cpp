#include "Cordinate.h"
#include <iostream>
using namespace std;
Cordinate::Cordinate(int x, int y)
{

	m_ix = x;
	m_iy = y;
}

void Cordinate::printCordinate()
{
	cout<<"("<<m_ix<<","<<m_iy<<")"<<endl;
}
ostream &operator<<(ostream &out,Cordinate&coor)
{
	out<<"("<<coor.m_ix<<","<<coor.m_iy<<")"<<endl;
	return out;
}
bool Cordinate::operator==(Cordinate &coor)
{
	if (coor.m_ix == this->m_ix && coor.m_iy==this->m_iy)
	{
		return true;
	}
	return false;
}