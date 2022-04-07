//Investment_Account.cpp
//321 prefix for brokerage account
//must have account manager
#include<sstream>
#include<string>
#include"Investment_Account.h"
using namespace std;

Investment_Account::Investment_Account(){setInfo("123", "");}
Investment_Account::Investment_Account(string acc, string ownerID): Account("123" +acc, ownerID){}

void Investment_Account::setAccountManager(string accManager)
{
	accountManager = accManager;
}

string Investment_Account::getAccountManager() const
{
	return accountManager;
}

string Investment_Account::print() const{
     
     ostringstream convert; //convert double to sring strategy
     convert <<getBalance();
     
     string str = getAccountOwnerID();
     str += "\t";
     str += getAccountNumber();
     str += "\t";
     str += getAccountManager();
     str += "\t\t$";
     str += convert.str();
     
     return str;
}
