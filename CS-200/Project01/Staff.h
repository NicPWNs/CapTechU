//Staff.h
//Nicholas Jones
//Derived from Person Class

#include"Person.h"
using namespace std;

#ifndef STAFF_H
#define STAFF_H

class Staff: public Person
{
	private:
		string sdepartment;
		
	public:
		Staff();
		void setSDepartment(string);
		void getSDepartment() const;
		virtual void print() const;
};
#endif
