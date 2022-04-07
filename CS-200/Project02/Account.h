//Account.h

using namespace std;
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
      public:
             Account();
             Account(string accNum, string accID);
             void setInfo(string accNum, string accID);
             void updateBalance(double amount);
             double getBalance() const;
             string getAccountNumber() const;
             string getAccountOwnerID() const;
             virtual string print() const = 0;
             
      private:
         string accountNumber; 
         string accountOwnerID;
         double balance;     
};
#endif
