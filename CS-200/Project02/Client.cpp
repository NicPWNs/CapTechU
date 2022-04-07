//Client.cpp

#include<string>
#include"Client.h"
using namespace std;

Client::Client(){
    setFirstName("NOT ASSIGNED");
    setLastName("NOT ASSIGNED");
    setClientID("NOT ASSIGNED");
}
Client::Client(string clID){
     setFirstName("NOT ASSIGNED");
     setLastName("NOT ASSIGNED");
     setClientID(clID);
}

void Client::setFirstName(string f){fname = f;}
void Client::setLastName(string l){lname = l;}
void Client::setClientID(string i){id = i;}

string Client::getFullName() const {return fname + " " + lname;}
string Client::getClientID() const {return id;}
