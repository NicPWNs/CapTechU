//Staff.cpp
//Nicholas Jones
//Derived from Person Class

#include<iostream>
#include<string>
#include"Staff.h"
using namespace std;

Staff::Staff()
{
	sdepartment = "";
}

void Staff::setSDepartment(string d)
{
	sdepartment = d;
}

void Staff::getSDepartment() const
{
	cout<<"Staff Department: "<<sdepartment<<endl;
}

void Staff::print() const
{
	getName();
	getDate();
	getSDepartment();
}
