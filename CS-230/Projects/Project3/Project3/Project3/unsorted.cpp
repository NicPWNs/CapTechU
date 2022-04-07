#include "unsorted.h"

using namespace std;


UnsortedType::UnsortedType() 
{
	length = 0;
	currentPos = -1;

	info = new ItemType[capacity];
}
// Constructor

void UnsortedType::MakeEmpty() 
{
	length = 0;
}
// Function: Returns the list to the empty state.
// Post:  List is empty.

bool UnsortedType::IsFull() const 
{
	return (length == capacity);
}
// Function:  Determines whether list is full.
// Pre:  List has been initialized.
// Post: Function value = (list is full)

int UnsortedType::GetLength() const 
{
	return length;
}
// Function: Determines the number of elements in list.
// Pre:  List has been initialized.
// Post: Function value = number of elements in list

ItemType UnsortedType::GetItem(ItemType item, bool& found) 
{
	bool moreToSearch;
	int location = 0;
	found = false;

	moreToSearch = (location < length);

	while (moreToSearch && !found)
	{
		switch (item.ComparedTo(info[location]))
		{
		case LESS:
		case GREATER:
			location++;
			moreToSearch = (location < length);
			break;
		case EQUAL:
			found = true;
			item = info[location];
			break;
		}
	}

	return item;
}
// Function: Retrieves list element whose key matches item's key (if
//           present).
// Pre:  List has been initialized.
//       Key member of item is initialized.
// Post: If there is an element someItem whose key matches
//       item's key, then found = true and someItem is returned.
// 	 otherwise found = false and item is returned.
//       List is unchanged.

void UnsortedType::PutItem(ItemType item) 
{
	if (IsFull())
	{
		int newCapacity = capacity * 2;

		ItemType* newArr = new ItemType[newCapacity];

		for (int i = 0; i < length; i++)
		{
			newArr[i] = info[i];
		}

		delete[] info;

		info = newArr;

		capacity = newCapacity;
	}

	info[length] = item;
	length++;
}
// Function: Adds item to list.
// Pre:  List has been initialized.
//       List is not full.
//       item is not in list.
// Post: item is in list.

void UnsortedType::DeleteItem(ItemType item) 
{
	int location = 0;

	while (item.ComparedTo(info[location]) != EQUAL)
		location++;

	info[location] = info[length - 1];
	length--;
}
// Function: Deletes the element whose key matches item's key.
// Pre:  List has been initialized.
//       Key member of item is initialized.
//       One and only one element in list has a key matching item's key.
// Post: No element in list has a key matching item's key.

void UnsortedType::ResetList() 
{
	currentPos = -1;
}
// Function: Initializes current position for an iteration through the list.
// Pre:  List has been initialized.
// Post: Current position is prior to list.

ItemType UnsortedType::GetNextItem() 
{
	if (currentPos == 0 || currentPos != length-1)		
		currentPos++;

	return info[currentPos];
}
// Function: Gets the next element in list.
// Pre:  List has been initialized and has not been changed since last call.
//       Current position is defined.
//       Element at current position is not last in list.
//	     
// Post: Current position is updated to next position.
//       item is a copy of element at current position.

bool UnsortedType::isEmpty()
{
	if (length <= 0)
		return true;
	else
		return false;
}