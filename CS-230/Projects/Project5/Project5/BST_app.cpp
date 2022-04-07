#include "TreeType.h"
#include <iostream>

using namespace std;

int main() 
{

	TreeType t1;
	ItemType item1 = 'a', item2 = 'b', item3 = 'c', item4 = 'd', item5 = 'e';

	t1.PutItem(item5);
	t1.PutItem(item2);
	t1.PutItem(item4);
	t1.PutItem(item1);
	t1.PutItem(item3);

	cout << "Printing Items: ";
	t1.Print(cout);
	cout << endl << endl;

	cout << "In Order Traversal: ";
	t1.PrintInOrder();
	cout << endl << endl;

	cout << "Pre Order Traversal: ";
	t1.PrintPreOrder();
	cout << endl << endl;

	cout << "Post Order Traversal: ";
	t1.PrintPostOrder();
	cout << endl << endl;

	system("PAUSE");
	return 0;
}