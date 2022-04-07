//IT.h
//Nicholas Jones
//Derived from Staff Class

#include"Staff.h"
using namespace std;

#ifndef IT_H
#define IT_H

class IT: public Staff
{
	private:
		string title;
		string certification;
		
	public:
		IT();
		void setTitle(string);
		void setCert(string);
		void getIT() const;
		virtual void print() const;
};
#endif
