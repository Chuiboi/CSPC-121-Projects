//================================================================================
// File: Project 5.2.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Oct. 2, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 5  Part No. 2 
// 
// Description:
//	This program will display two arrays and their sorted arrays. It will also
// display the Uppercase sorted string array.
//=================================================================================
#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <time.h>

// Template Function Prototypes
template <class TYPE>
void DisplayArray(TYPE x[], int n);
template <class TYPE>
void SortArray(TYPE x[], int n);

// Function Prototype
template <class TYPE>
void SortUpper(TYPE x[], int n);

using namespace std;


//== main =========================================================================
//
//=================================================================================

int main()
{
	// Display time and date of program execution.
	time_t p;
	time(&p);
	cout << "Time of execution: " << ctime(&p) << endl;

	// Declare arrays
	int age[5] = { 22, 33, 11, 16, 10 };
	string name[4] = { "Bill", "Adam", "Mary", "David" };

	// Call functions to display and sort.
	cout << "Original Age Array: ";
	DisplayArray(age, 5);
	cout << "Original Name Array: ";
	DisplayArray(name, 4);
	cout << "Sorted Age Array: ";
	SortArray(age, 5);
	cout << "Sorted Name Array: ";
	SortArray(name, 4);
	cout << "Sorted Names in Uppercase: ";
	SortUpper(name, 4);

	system("PAUSE");
	return 0;
}

//=== DisplayArray ================================================================
// This function will print the array 
//
// Input:
//		x[]	-- array that you want printed
// Output:
//		Printed array of either strings or integers.
//=================================================================================
template <class TYPE>
void DisplayArray(TYPE x[], int n)
{
	for (int i = 0; i < n; i++)
		cout << x[i] << " ";
	cout << endl;
}
//=== sortArray ===================================================================
// This function will sort the arrays and print them out.
//
// Input:
//		x[]	-- array that you want sorted and printed
// Output:
//		Sorted array of either strings or integers.
//=================================================================================
template <class TYPE>
void SortArray(TYPE x[], int n)
{
	sort(x, x + n);
	for (int i = 0; i < n; i++)
		cout << x[i] << " ";
	cout << endl;
}
//=== SortUpper =================================================================
// This function will sort the string array and capitalize all of the letters
//
// Input:
//		x[]	-- string that you want the words to be sorted and capitalized.
// Output:
//		Sorted array of names with all letters capitalized will be printed.
//=================================================================================
template <class TYPE>
void SortUpper(TYPE x[], int n)
{
	sort(x, x + n);
	for(int i = 0; i < n; i++)
	{
		// Iterate through each element of the string array and perform
		// toupper on the string element.
		transform(x[i].begin(), x[i].end(), x[i].begin(), toupper);
		cout << x[i] << " ";
	}
	cout << endl;
}
/*-------------------------OUTPUT----------------------------------------------
Time of execution: Wed Oct 08 10:34:52 2014

Original Age Array: 22 33 11 16 10
Original Name Array: Bill Adam Mary David
Sorted Age Array: 10 11 16 22 33
Sorted Name Array: Adam Bill David Mary
Sorted Names in Uppercase: ADAM BILL DAVID MARY
Press any key to continue . . .
-----------------------------------------------------------------------------*/
