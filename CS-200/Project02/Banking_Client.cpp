//Banking_Client.cpp
#include<iostream>
#include<string>
#include "Banking_Client.h"
using namespace std;

Banking_Client::Banking_Client(){
      int accCount; 
      string account, ownerID, first, last;
      double initialBalance;                        
      do
      {
          cout <<"Enter the number of checking accounts for this new client: ";
          cin >> accCount;
          if(accCount <0 || accCount > 10)
          	cout<<"ERROR: Invalid number of accounts!\n";
      }while(accCount <0 || accCount > 10);
      
      numberOfAccounts = accCount;    
      cout <<"Enter the 5 digits/letters ownerID (applies to all accounts!): ";
      cin >> ownerID;
      cout <<"Enter the owner's First Name: ";
      cin >>first;
      cout <<"Enter the owner's Last Name: ";
      cin >>last;
      setFirstName(first);
      setLastName(last);
      setClientID(ownerID);   
      
      for (int i = 0; i < accCount; i++)
      {
          cout <<"Enter a new 4 digit account number: ";
          cin >>account;
          ch[i].setInfo("123" + account, getClientID());
          cout <<"Enter an initial balance for this account: $";
          cin >>initialBalance;
          ch[i].updateBalance(initialBalance);
      }
      
}
string Banking_Client::print()const{
       string str, strIN;
       int i;
       str = getFullName();
       str += "\n";
       str += "ID\tAccount\tAmount\n";
       for (i = 0; i < numberOfAccounts; i++)
             strIN += ch[i].print() + "\n";
       
       str += strIN;
       
       return str;
}
