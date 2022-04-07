#include <cstdlib>
#include <iostream>
#include <list>
#include <string>

#include"Banking_Client.h"
#include"Brokerage_Client.h"

using namespace std;

int menu()
{
    int choice;
    cout <<"Main Menu\n"
         <<"=========\n"
         <<"1. Add checking client\n"
         <<"2. Add investment client\n"
         <<"3. View ALL checking clients\n"
         <<"4. View ALL investment clients\n"
         <<"5. Exit the program\n"
         <<"Enter your choice: ";
    cin >>choice;
    return choice;
}

int main(int argc, char *argv[])
{
    //create a list/array to hold all the banking clients
    list<Banking_Client> listBanks;
    
    //create a list/array to hold all the brokerage clients
    list<Brokerage_Client> listBrokes;
    
    int option;
    do {
        system("CLS");
        option = menu();
        switch (option) {
            case 1:
            {
                //use default constructor to add Banking Clients
                Banking_Client ch;
                listBanks.push_back(ch);
                break;
            }
            case 2:
            {
                //use default constructor to add Brokerage Clients
                Brokerage_Client inv;
                listBrokes.push_back(inv);
                break;
            }
            case 3:
            {
                //print all banking/checking clients
                cout << "\n========= PRINTED REPORT =========\n\n";
                list<Banking_Client> printlist = listBanks;
                while (!printlist.empty())
                {
                    Banking_Client ch = printlist.back();
                    printlist.pop_back();
                    cout << ch.print() << endl;
                }
                
                break;
            }
            case 4:
            {
                //print all brokerage/investment clients
                cout << "\n========= PRINTED REPORT =========\n\n";
                
                list<Brokerage_Client> printlist = listBrokes;
                while (!printlist.empty())
                {
                    Brokerage_Client inv = printlist.back();
                    printlist.pop_back();
                    cout << inv.print() << endl;
                }
                
                break;
            }
            case 5:
            {
                cout << "Goodbye!\n";
                break;
            }
            default: cout << option << " is not a valid option!\n";
        }

        system("PAUSE");
    } while (option != 5);
    
    return EXIT_SUCCESS;
}

