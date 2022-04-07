//Checking.h
#include"Account.h"
using namespace std;
#ifndef CHECKING_H
#define CHECKING_H
class Checking: public Account{
      public:
             Checking();
             Checking(string acc, string ownerID);
             virtual string print() const;
};
#endif
