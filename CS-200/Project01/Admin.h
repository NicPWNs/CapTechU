//Admin.h
//Nicholas Jones
//Derived from Staff Class

#include"Staff.h"
using namespace std;

#ifndef ADMIN_H
#define ADMIN_H

class Admin: public Staff
{
	private:
		string title;
		
	public:
		Admin();
		void setTitle(string);
		void getTitle() const;
		virtual void print() const;
};
#endif
