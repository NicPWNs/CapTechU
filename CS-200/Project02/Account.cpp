//Account.cpp
#include<string>
#include"Account.h"

using namespace std;

Account::Account(){
    setInfo("", "");
    balance = 0.0;
}
Account::Account(string accNum, string accID){
    setInfo(accNum, accID);
    balance = 0.0;
}
void Account::setInfo(string accNum, string accID)
{
    accountNumber = accNum;
    accountOwnerID = accID;
}
void Account::updateBalance(double amount){
    balance += amount;
}
double Account::getBalance() const {return balance;}
string Account::getAccountNumber() const {return accountNumber;}
string Account::getAccountOwnerID() const {return accountOwnerID;}
