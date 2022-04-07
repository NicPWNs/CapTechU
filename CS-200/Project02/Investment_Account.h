//Investment_Account.h
#include"Account.h"
#ifndef INVESTMENT_ACCOUNT_H
#define INVESTMENT_ACCOUNT_H
class Investment_Account: public Account{
      public:
             Investment_Account();
             Investment_Account(string acc, string ownerID);
             virtual string print() const;
             void setAccountManager(string accManager);
             string getAccountManager() const;
    
      private:
      		string accountManager;
    
};
#endif
