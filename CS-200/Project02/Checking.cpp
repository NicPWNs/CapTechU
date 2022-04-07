//checking.cpp
//123 prefix for checking account
#include<sstream>
#include<string>
#include"Checking.h"
using namespace std;

Checking::Checking(){setInfo("123", "");}
Checking::Checking(string acc, string ownerID): Account("123" +acc, ownerID){}

string Checking::print() const{
     
     ostringstream convert; //convert double to sring strategy
     convert <<getBalance();
     
     string str = getAccountOwnerID();
     str += "\t";
     str += getAccountNumber();
     str += "\t$";
     str += convert.str();
     
     return str;
}
