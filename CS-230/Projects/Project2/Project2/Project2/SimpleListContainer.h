#pragma once
#include <iostream>

using namespace std;

template <typename T>
class SimpleListContainer 
{

private:
	int size;
	const static int capacity = 5;
	T data[capacity];

public:

	SimpleListContainer();

	//which will add an item of type T to our array and return true, or return false if array already full
	bool insert(T);

	//which will return true / false depending on if value T is present in array
	bool search(T);

	//which will return the number of items currently stored(different from capacity which is fixed)
	int length();

	//which returns true if list is empty(size 0) or else false
	bool empty();

	//which prints all the data stored, line by line for each element in the array
	void print();

	//which clears the list by resetting size to 0
	void clear();

	//which deletes all instances of T found in the list and compresses the list via a simple algorithm
	void remove(T);

};

template <typename T>
SimpleListContainer<T>::SimpleListContainer() 
{
	clear();
}

template <typename T>
bool SimpleListContainer<T>::insert(T value) 
{
	if (size < capacity) 
	{

		data[size] = value;
		size++;
		return true;
	}
	else 
		return false;
}

template <typename T>
bool SimpleListContainer<T>::search(T value)
{
	for (int i = 0; i < size; i++)
	{
		if (data[i] == value)
			return true;
	}
	
	return false;
}

template <typename T>
int SimpleListContainer<T>::length()
{
	return size;
}

template <typename T>
bool SimpleListContainer<T>::empty()
{
	if (size == 0)
		return true;
	else
		return false;
}

template <typename T>
void SimpleListContainer<T>::print() 
{

	for (int i = 0; i < size; i++)
		cout << data[i] << ", ";
    
	cout << "\n";
}

template <typename T>
void SimpleListContainer<T>::clear() 
{
	size = 0;
}

template <typename T>
void SimpleListContainer<T>::remove(T value)
{
	for (int i = 0; i < size; i++)
	{
		if (data[i] == value)
		{
			for (int j = i; j < size - 1; j++)
			{
				data[j] = data[j + i];
			}

			size--;
		}
	}
}