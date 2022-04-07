//Banking_Client.h
#include"Client.h"
#include"Checking.h"
using namespace std;
#ifndef BANKING_CLIENT_H
#define BANKING_CLIENT_H
class Banking_Client: public Client{
      public:
         Banking_Client();
         virtual string print() const;    
      private:
         int numberOfAccounts; //number of checking accounts (up to 10)
         
         Checking ch[10]; //prossible checking accounts
         
};
#endif
