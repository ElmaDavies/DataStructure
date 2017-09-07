#ifndef CORDINATE_H
#define CORDINATE_H
#include <ostream>
using namespace std;
class Cordinate
{

	friend ostream &operator<<(ostream &out,Cordinate &coor);
public:
	
	Cordinate(int x = 0,int y=0);
	void printCordinate();
private:
	int m_ix;
	int m_iy;

};

#endif
