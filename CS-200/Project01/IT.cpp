//IT.cpp
//Nicholas Jones
//Derived from Staff Class

#include<iostream>
#include<string>
#include"IT.h"
using namespace std;

IT::IT()
{
	title = "";
	certification = "";
}

void IT::setTitle(string t)
{
	title = t;
}

void IT::setCert(string c)
{
	certification = c;
}

void IT::getIT() const
{
	cout<<"Job Title: "<<title<<endl;
	cout<<"Certification: "<<certification<<endl;
}

void IT::print() const
{
	getName();
	getDate();
	getIT();	
}
