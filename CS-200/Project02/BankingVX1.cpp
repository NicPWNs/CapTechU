#include <cstdlib>
#include <iostream>

#include"Banking_Client.h"
#include"Brokerage_Client.h"

using namespace std;

int main(int argc, char *argv[])
{
    Brokerage_Client b1;
    
    cout <<b1.print()<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
