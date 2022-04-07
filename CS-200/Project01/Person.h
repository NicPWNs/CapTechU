//Person.h
//Nicholas Jones
//Base Class

using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person
{
	private:
		string firstName;
		string lastName;
		string startMonth;
		int startYear;
	
	public:
		Person();
		void setName(string, string);
		void setDate(string, int);
		void getName() const;
		void getDate() const;
		virtual void print() const = 0;
};
#endif
