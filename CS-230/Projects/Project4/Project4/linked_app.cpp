#include "unsorted.h"
#include <iostream>

using namespace std;

int main() 
{
	cout << "### Linked List Demo ###" << endl;
	UnsortedType ut;
	cout << "Unsorted Type Object Created!" << endl;

	ItemType item1, item2, item3;
	item1.Initialize(1);
	item2.Initialize(2);
	item3.Initialize(3);
	cout << "Items 1-3 Created!" << endl;

	cout << endl << "Current List Length: " << ut.GetLength() << endl;

	ut.PutItem(item1);
	ut.PutItem(item2);
	ut.PutItem(item3);
	cout << endl << "Items 1-3 Added to List!" << endl;
	
	cout << endl << "New Current List Length: " << ut.GetLength() << endl;
	
	cout << "Showing Linked List Using Iterator: " << endl;
	for (int i = 0; i < ut.GetLength(); i++)
	{
		ItemType item = ut.GetNextItem();
		item.Print(cout);
		cout << endl;
	}
	cout << "Reseting Iterator!" << endl;
	ut.ResetList();

	cout << endl << "Adding New Item 4 to End of List!" << endl;
	ItemType item4;
	item4.Initialize(4);
	ut.PutItemLast(item4);

	cout << endl << "New Current List Length: " << ut.GetLength() << endl;

	cout << "Showing Linked List Using Iterator: " << endl;
	for (int i = 0; i < ut.GetLength(); i++)
	{
		ItemType item = ut.GetNextItem();
		item.Print(cout);
		cout << endl;
	}
	cout << "Reseting Iterator!" << endl;
	ut.ResetList();

	cout << endl << "Now Deleting Item 2!" << endl;
	ut.DeleteItem(item2);

	cout << endl << "New Current List Length: " << ut.GetLength() << endl;

	cout << "Showing Linked List Using Iterator: " << endl;
	for (int i = 0; i < ut.GetLength(); i++)
	{
		ItemType item = ut.GetNextItem();
		item.Print(cout);
		cout << endl;
	}
	cout << "Reseting Iterator!" << endl;
	ut.ResetList();

	ItemType item = ut.FirstItem();
	cout << endl << "First Item in List: ";
	item.Print(cout);
	cout << endl;

	ItemType itm = ut.LastItem();
	cout << endl << "Last Item in List: ";
	itm.Print(cout);
	cout << endl;

	cout << endl << "Is the List Full?: " << ut.IsFull() << endl << endl;

	cout << "Finding item 3..." << endl;
	bool found;
	ItemType foundItem = ut.GetItem(item3, found);

	cout << "Item Found?: " << found << endl;

	if (found) {
		cout << "Found Item: ";
		foundItem.Print(cout);
		cout << endl << endl;
	}

	cout << "Making List Empty!" << endl;
	ut.MakeEmpty();

	cout << endl << "New Current List Length: " << ut.GetLength() << endl;

	cout << "Showing Linked List Using Iterator: " << endl;
	for (int i = 0; i < ut.GetLength(); i++)
	{
		ItemType item = ut.GetNextItem();
		item.Print(cout);
		cout << endl;
	}
	cout << "Reseting Iterator!" << endl;
	ut.ResetList();

	system("PAUSE");

	return 0;
}