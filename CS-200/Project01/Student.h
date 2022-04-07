//Student.h
//Nicholas Jones
//Derived from Person Class

#include"Person.h"
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student: public Person
{
	private:
		int credits;
		double gpa;
		
	public:
		Student();
		void setCredits(int);
		void setGPA(double);
		void getReport() const;
		virtual void print() const;		
};
#endif
