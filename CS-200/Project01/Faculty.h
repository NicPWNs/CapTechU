//Faculty.h
//Nicholas Jones
//Derived from Person Class

#include"Person.h"
using namespace std;

#ifndef FACULTY_H
#define FACULTY_H

class Faculty: public Person
{
	private:
		string department;
		
	public:
		Faculty();
		void setDepartment(string);
		void getDepartment() const;
		virtual void print() const;		
};
#endif
