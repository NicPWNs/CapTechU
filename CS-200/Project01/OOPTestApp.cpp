//OOPTestApp.cpp
//Nicholas Jones
//Tests the functionality of the OOP Project
//Lab#4 Modified to Support Polymorphism

#include <iostream>
#include <string>
using namespace std;
#include"Person.h"
#include"Student.h"
#include"Faculty.h"
#include"Staff.h"
#include"IT.h"
#include"Admin.h"

int main(int argc, char** argv) 
{
	Person* p1;
	Student s1;
	Faculty f1;
	Staff stf1;
	IT it;
	Admin a1;
	
	string fname, lname, month, dep, title, cert;
	int year, credits;
	double gpa;
	
	cout<<"OBJECT ORIENTED PROGRAMMING"<<endl;
	cout<<"==========================="<<endl;	
	cout<<"\nTest #1 Derived Student Class: "<<endl;
	p1 = &s1;
	cout<<"Enter Student's First Name: ";
	cin>>fname;
	cout<<"Enter Student's Last Name: ";
	cin>>lname;
	p1 -> setName(fname, lname);
	cout<<"Enter the month of start: ";
	cin>>month;
	cout<<"Enter the year of start: ";
	cin>>year;
	p1 -> setDate(month, year);
	cout<<"Enter the Student's number of credits: ";
	cin>>credits;
	s1.setCredits(credits);
	cout<<"Enter the Student's GPA: ";
	cin>>gpa;
	s1.setGPA(gpa);
	cout<<"\nThis Student's information follows:"<<endl;
	
	p1 -> print();
	
	cout<<"\nTest #2 Derived Faculty Class: "<<endl;
	p1 = &f1;
	cout<<"Enter Faculty Member's First Name: ";
	cin>>fname;
	cout<<"Enter Faculty Member's Last Name: ";
	cin>>lname;
	p1 -> setName(fname, lname);
	cout<<"Enter the month of start: ";
	cin>>month;
	cout<<"Enter the year of start: ";
	cin>>year;
	p1 -> setDate(month, year);
	cout<<"Enter the Faculty Member's Department: ";
	cin>>dep;
	f1.setDepartment(dep);
	cout<<"\nThis Faculty Member's information follows:"<<endl;
	
	p1 -> print();
	
	cout<<"\nTest #3 Derived Staff Class: "<<endl;
	p1 = &stf1;
	cout<<"Enter Staff Member's First Name: ";
	cin>>fname;
	cout<<"Enter Staff Member's Last Name: ";
	cin>>lname;
	p1 -> setName(fname, lname);
	cout<<"Enter the month of start: ";
	cin>>month;
	cout<<"Enter the year of start: ";
	cin>>year;
	p1 -> setDate(month, year);
	cout<<"Enter the Staff Member's Department: ";
	cin>>dep;
	stf1.setSDepartment(dep);
	cout<<"\nThis Staff Member's information follows:"<<endl;
	
	p1 -> print();
	
	cout<<"\nTest #4 Derived IT Class from Derived Staff Class: "<<endl;
	p1 = &it;
	cout<<"Enter Staff Member's First Name: ";
	cin>>fname;
	cout<<"Enter Staff Member's Last Name: ";
	cin>>lname;
	p1 -> setName(fname, lname);
	cout<<"Enter the month of start: ";
	cin>>month;
	cout<<"Enter the year of start: ";
	cin>>year;
	p1 -> setDate(month, year);
	cout<<"Enter the Staff Member's Department: ";
	cin>>dep;
	it.setSDepartment(dep);
	cout<<"Enter the IT Member's Job Title: ";
	cin>>title;
	it.setTitle(title);
	cout<<"Enter the IT Member's Certification: ";
	cin>>cert;
	it.setCert(cert);
	cout<<"\nThis Staff Member's information follows:"<<endl;
	
	p1 -> print();
	
	cout<<"\nTest #5 Derived Administration Class from Derived Staff Class: "<<endl;
	p1 = &a1;
	cout<<"Enter Staff Member's First Name: ";
	cin>>fname;
	cout<<"Enter Staff Member's Last Name: ";
	cin>>lname;
	p1 -> setName(fname, lname);
	cout<<"Enter the month of start: ";
	cin>>month;
	cout<<"Enter the year of start: ";
	cin>>year;
	p1 -> setDate(month, year);
	cout<<"Enter the Staff Member's Department: ";
	cin>>dep;
	a1.setSDepartment(dep);
	cout<<"Enter the Administration Member's Job Title: ";
	cin>>title;
	a1.setTitle(title);
	cout<<"\nThis Administration Member's information follows:"<<endl;
	
	p1 -> print();
	
	return 0;
}
