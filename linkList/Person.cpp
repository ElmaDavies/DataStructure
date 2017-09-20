#include "person.h"
#include <ostream>
Person &Person::operator=(Person &person)
{
	this->name = person.name;
	this->number = person.number;
	return *this;
}
bool Person::operator==(Person &person)
{
	if ((this->name==person.name)&&(this->number==person.number))
	{
		return true;
	}
	return false;
}
ostream &operator<<(ostream &out,Person &person)
{
	out<<person.name<<"=================="<<person.number<<endl;
	return out;

}