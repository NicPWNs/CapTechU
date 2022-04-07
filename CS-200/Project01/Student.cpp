//Student.cpp
//Nicholas Jones
//Derived from Person Class

#include<iostream>
#include<string>
#include"Student.h"
using namespace std;

Student::Student()
{
	credits = 0;
	gpa = 0.0;
}

void Student::setCredits(int c)
{
	credits = c;
}

void Student::setGPA(double g)
{
	gpa = g;
}

void Student::getReport() const
{
	cout<<"Student Report"<<endl;
	cout<<"=============="<<endl;
	cout<<"Credits: "<<credits<<endl;
	cout<<"GPA: "<<gpa<<endl;
}

void Student::print() const
{
	getName();
	getDate();
	getReport();
}
