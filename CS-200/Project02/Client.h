//Client.h
//make base class for investor (brokrage account), banking client (checking)

using namespace std;
#ifndef CLIENT_H
#define CLIENT_H
class Client{
      public:
          Client();
          Client(string clientID);
          void setFirstName(string f);
          void setLastName(string l);
          void setClientID(string i);
          string getFullName() const;
          string getClientID() const;
          virtual string print() const = 0;
      private:
          string fname;
          string lname;
          string id;    
      
};
#endif
