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
#include <cmath>
#include <iomanip>
#include <string>
#include <ctime>
#include <algorithm>
#include <fstream>
#include <cctype>

using namespace std;

// Function prototypes
void displayArray(string text[]);
void displayArray(int numArray[]);
void sortArray(int numArray[]);
void sortArray(string text[]);
void sortUpper(string text[]);

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
	int age[5] = {22, 33, 11, 16,10};
	string name[4] = {"Bill", "Adam", "Mary", "David"};

	displayArray(age);
	displayArray(name);
	sortArray(age);
	sortArray(name);
	sortUpper(name);

	system("PAUSE");
	return 0;
}

//=== displayArray ================================================================
//
// This function will print the array 
//
// Input:
//		text[]	-- string array that you want printed
//		numArray[] -- integer array that you want printed
// Output:
//		Printed array of either strings or integers.
//
//=================================================================================
void displayArray(string text[])
{
	cout << "Original Name Array: ";
	for(int i = 0; i < 4; i++)
		cout << text[i] << " ";
	cout << endl;
}

void displayArray(int numArray[])
{
	cout << "Orginal array age: ";
	for(int j = 0; j < 5; j++)
		cout << numArray[j] << " ";
	cout << endl;
}

//=== sortArray ===================================================================
//
// This function will sort the arrays and print them out.
//
// Input:
//		text[]	-- string array that you want sorted and printed
//		numArray[] -- integer array that you wanted sorted and printed
// Output:
//		Sorted array of either strings or integers.
//
//=================================================================================
void sortArray(int numArray[])
{
	sort(numArray, numArray + 5);
	cout << "Sorted Array Age: ";
	for(int j = 0; j < 5; j++)
		cout << numArray[j] << " ";
	cout << endl;
}

void sortArray(string text[])
{
	sort(text,text + 4);
	cout << "Sorted Array Name: ";
	for(int i = 0; i < 4; i++)
		cout << text[i] << " ";
	cout << endl;
}

//=== sortUpper =================================================================
//
// This function will sort the string array and capitalize all of the letters
//
// Input:
//		text[]	-- string that you want the words to be sorted and capitalized.
//
// Output:
//		Sorted array of names with all letters capitalized will be printed.
//
//=================================================================================
void sortUpper(string text[])
{
	sort(text, text + 4);
	cout << "Sorted Names in Uppercase: ";
	for(int i = 0; i < 4; i++)
	{
		// Iterate through each element of the string array and perform
		// toupper on the string element.
		transform(text[i].begin(), text[i].end(), text[i].begin(), toupper);
		cout << text[i] << " ";
	}
	cout << endl;
}
/*-------------------------OUTPUT----------------------------------------------
Time of execution: Sat Sep 27 14:31:02 2014

Orginal array age: 22 33 11 16 10
Original Name Array: Bill Adam Mary David
Sorted Array Age: 10 11 16 22 33
Sorted Array Name: Adam Bill David Mary
Sorted Names in Uppercase: ADAM BILL DAVID MARY
Press any key to continue . . .
-----------------------------------------------------------------------------*/
