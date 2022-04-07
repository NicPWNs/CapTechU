//Admin.cpp
//Nicholas Jones
//Derived from Staff Class

#include<iostream>
#include<string>
#include"Admin.h"
using namespace std;

Admin::Admin()
{
	title = "";
}

void Admin::setTitle(string t)
{
	title = t;
}

void Admin::getTitle() const
{
	cout<<"Job Title: "<<title<<endl;
}

void Admin::print() const
{
	getName();
	getDate();
	getTitle();
}
