#include <iostream>

using namespace std;

/*
	Binary search requires that we define the boundaries within the array:
	- The starting boundary begins as 0 (first index) and may move to the right
	if values to the left of it can be ignored.
	- The ending boundary begins as the full length of the array and moves to
	the left if values to the right can be ignored. 
	- The midpoint is always offset by the starting point and that offset is
	added the halfway point between start and end.
	- Duplicate items are allowed, but only first match is returned.
*/

int binarySearch(int nums[], int start, int end, int item)
{
	int mid;

	// Give up once we can't shrink the sub-list any more.
	while (start < end)
	{
		// Starting from 'start', add the midpoint of our range.
		mid = start + (end - start) / 2;
		cout << "start: " << start << ", end: " << end << ", mid: " << mid << endl;

		// We found the item! Return the index.
		if (item == nums[mid])
			return mid;

		// Item is to the left, shrink by moving end to the left.
		else if (item < nums[mid])
			end = mid - 1;

		// Item is to the right, shrink by moving start tot he right.
		else
			start = mid + 1;
	}
	return -1;
}

int binarySearchRec(int nums[], int start, int end, int item)
{
	int mid;

	mid = start + (end - start) / 2;

	if (start < end)
	{
		cout << "start: " << start << ", end: " << end << ", mid: " << mid << endl;

		if (item == nums[mid])
			return mid;

		else if (item < nums[mid])
			return binarySearchRec(nums, start, mid - 1, item);

		else if (item > nums[mid])
			return binarySearchRec(nums, mid + 1, end, item);
	}

	else
		return -1;
}

int main()
{
	// List must be ordered for binary search to work.
	int nums[10] = { 1, 2, 3, 5, 7, 11, 12, 13, 15, 20 };

	cout << "Regular Binary Search Function: " << endl;
	cout << "=============================== " << endl;
	cout << "binarySearch 1: " << binarySearch(nums, 0, 10, 1) << endl; // 0
	cout << "binarySearch 12: " << binarySearch(nums, 0, 10, 12) << endl; // 6 
	cout << "binarySearch 20: " << binarySearch(nums, 0, 10, 20) << endl; // 9
	cout << "binarySearch 6: " << binarySearch(nums, 0, 10, 6) << endl; // -1
	cout << "binarySearch 100: " << binarySearch(nums, 0, 10, 100) << endl << endl; // -1 

	cout << "Recursive Binary Search Function: " << endl;
	cout << "================================= " << endl;
	cout << "binarySearchRec 1: " << binarySearchRec(nums, 0, 10, 1) << endl; // 0
	cout << "binarySearchRec 12: " << binarySearchRec(nums, 0, 10, 12) << endl; // 6 
	cout << "binarySearchRec 20: " << binarySearchRec(nums, 0, 10, 20) << endl; // 9
	cout << "binarySearchRec 6: " << binarySearchRec(nums, 0, 10, 6) << endl; // -1
	cout << "binarySearchRec 100: " << binarySearchRec(nums, 0, 10, 100) << endl; // -1

	system("PAUSE");
	return 0;
}