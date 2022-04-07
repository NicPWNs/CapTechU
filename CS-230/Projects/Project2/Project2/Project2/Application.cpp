#include <iostream>
#include "SimpleListContainer.h"

using namespace std;

int main() {

	SimpleListContainer<int> myList;
	SimpleListContainer<char> myList2;

	cout << "Created two objects: myList - of type int AND myList2 - of type char\n" << endl;

	cout << "myList - int - Demonstration" << endl
		 << "============================" << endl;

	cout << "Inserting 6 values into myList: 1, 3, 5, 7, 3, 11" << endl;

	myList.insert(1);
	myList.insert(3);
	myList.insert(5);
	myList.insert(7);
	myList.insert(3);
	myList.insert(9);

	cout << "\nPrinting myList: \n";

	myList.print();

	cout << "\nPrinting myList Length: \n" << myList.length() << endl;
	
	cout << "\nSearching myList for Value 5 (1 means TRUE): \n" << myList.search(5) << endl;

	cout << "\nIs the myList empty? (0 means FALSE): \n" << myList.empty() << endl;

	cout << "\nRemoving all values of 3 from myList!\n" << endl;

	myList.remove(3);

	cout << "Printing myList: ";

	myList.print();

	cout << "\nPrinting myList Length: \n" << myList.length() << endl;

	cout << "\nSearching myList for Value 3 (0 means FALSE): \n" << myList.search(3) << endl;

	cout << "\nClearing myList!\n" << endl;

	myList.clear();

	cout << "Printing myList: ";

	myList.print();

	cout << "\nmyList2 - char - Demonstration" << endl
		 << "==============================" << endl;

	cout << "Inserting 6 chars into myList2: a, b, c, d, b, e" << endl;

	myList2.insert('a');
	myList2.insert('b');
	myList2.insert('c');
	myList2.insert('d');
	myList2.insert('b');
	myList2.insert('e');

	cout << "\nPrinting myList2: \n";

	myList2.print();

	cout << "\nPrinting myList2 Length: \n" << myList2.length() << endl;

	cout << "\nSearching myList2 for Value 'c' (1 means TRUE): \n" << myList2.search('c') << endl;

	cout << "\nIs the myList2 empty? (0 means FALSE): \n" << myList2.empty() << endl;

	cout << "\nRemoving all values of 'b' from myList2!\n" << endl;

	myList2.remove('b');

	cout << "Printing myList2: ";

	myList2.print();

	cout << "\nPrinting myList2 Length: \n" << myList2.length() << endl;

	cout << "\nSearching myList2 for Value 'b' (0 means FALSE): \n" << myList2.search('b') << endl;

	cout << "\nClearing myList2!\n" << endl;

	myList2.clear();

	cout << "Printing myList2: ";

	myList2.print();

	system("PAUSE");

	return 0;
}