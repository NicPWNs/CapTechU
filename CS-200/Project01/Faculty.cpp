//Faculty.cpp
//Nicholas Jones
//Derived from Person Class

#include<iostream>
#include<string>
#include"Faculty.h"
using namespace std;

Faculty::Faculty()
{
	department = "";
}

void Faculty::setDepartment(string d)
{
	department = d;
}

void Faculty::getDepartment() const
{
	cout<<"Faculty Department: "<<department<<endl;
}

void Faculty::print() const
{
	getName();
	getDate();
	getDepartment();
}
