#include "unsorted.h"
#include <iostream>

using namespace std;

int main() 
{

	// Create UnsortedType object
	UnsortedType ut;

	cout << "UnsortedType 'ut' created!" << endl;
	cout << "Inserting 4 items into the list..." << endl;
	
	for (int i = 0; i < 8; i+=2)
	{
		ItemType item;
		item.Initialize(i);
		ut.PutItem(item);
	}

	cout << endl << "Using iterator to display items: " << endl;

	for (int i = 0; i < ut.GetLength(); i++)
	{
		ut.GetNextItem().Print(cout);
		cout << ", ";
	}
	cout << endl;
	cout << endl;
	cout << "Reseting iterator position for future use..." << endl << endl;
	ut.ResetList();
	
	cout << "List Length: " << ut.GetLength() << endl;
	cout << "Is the List Empty?: " << ut.isEmpty() << endl;
	cout << "Is the list Full?: " << ut.IsFull() << endl << endl;
	cout << "Adding a fifth item to the list..." << endl;

	ItemType item;
	item.Initialize(8);
	ut.PutItem(item);

	cout << endl << "Using iterator to display items: " << endl;

	for (int i = 0; i < ut.GetLength(); i++)
	{
		ut.GetNextItem().Print(cout);
		cout << ", ";
	}
	cout << endl;
	cout << endl;
	cout << "Reseting iterator position for future use..." << endl << endl;
	ut.ResetList();

	cout << "List Length: " << ut.GetLength() << endl;
	cout << "Is the List Empty?: " << ut.isEmpty() << endl;
	cout << "Is the list Full?: " << ut.IsFull() << endl << endl;

	cout << "Adding a sixth item to the list (previously full): " << endl;

	item.Initialize(10);
	ut.PutItem(item);

	cout << endl << "Using iterator to display items: " << endl;

	for (int i = 0; i < ut.GetLength(); i++)
	{
		ut.GetNextItem().Print(cout);
		cout << ", ";
	}
	cout << endl;
	cout << endl;
	cout << "Reseting iterator position for future use..." << endl << endl;
	ut.ResetList();

	cout << "List Length: " << ut.GetLength() << endl;
	cout << "Is the List Empty?: " << ut.isEmpty() << endl;
	cout << "Is the list Full?: " << ut.IsFull() << endl << endl;
	cout << "The list dynamically doubled it's capacity to fit more items!" << endl;

	item.Initialize(4);

	cout << endl << "Now deleting the item '4'..." << endl;
	ut.DeleteItem(item);

	cout << endl << "Using iterator to display items: " << endl;

	for (int i = 0; i < ut.GetLength(); i++)
	{
		ut.GetNextItem().Print(cout);
		cout << ", ";
	}
	cout << endl;
	cout << endl;
	cout << "Reseting iterator position for future use..." << endl << endl;
	ut.ResetList();

	cout << "List Length: " << ut.GetLength() << endl;
	cout << "Is the List Empty?: " << ut.isEmpty() << endl;
	cout << "Is the list Full?: " << ut.IsFull() << endl << endl;

	cout << "Making the list Empty!..." << endl;
	ut.MakeEmpty();

	cout << endl << "Using iterator to display items: " << endl;

	for (int i = 0; i < ut.GetLength(); i++)
	{
		ut.GetNextItem().Print(cout);
		cout << ", ";
	}
	cout << endl;
	cout << endl;
	cout << "Reseting iterator position for future use..." << endl << endl;
	ut.ResetList();

	cout << "List Length: " << ut.GetLength() << endl;
	cout << "Is the List Empty?: " << ut.isEmpty() << endl;
	cout << "Is the list Full?: " << ut.IsFull() << endl << endl;

	system("PAUSE");
	return 0;
}