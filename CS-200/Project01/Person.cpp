//Person.cpp
//Nicholas Jones
//Base Class

#include<iostream>
#include<string>
#include"Person.h"
using namespace std;

Person::Person()
{
	firstName = "";
	lastName = "";
	startMonth = "";
	startYear = 0;
}

void Person::setName(string f, string l)
{
	firstName = f;
	lastName = l;
}

void Person::getName() const
{
	cout<<"Full Name: "<<firstName<<" "<<lastName<<endl;
}

void Person::setDate(string m, int y)
{
	startMonth = m;
	startYear = y;
}

void Person::getDate() const
{
	cout<<"Start Date: "<<startMonth<<", "<<startYear<<endl;
}
