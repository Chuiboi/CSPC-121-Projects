//================================================================================
// File: Project 7.1.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Oct. 23, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 7  Part No. 1
// 
// Description:
// This program will read in user provided data into arrays. It will then
// display the contents of each array.
//=================================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;
// Declare function prototypes
template <class TYPE>
void ReadData(TYPE x[], int n);
template <class TYPE>
void DisplayData(TYPE x[], int n);
//== main =========================================================================
//
//=================================================================================
int main()
{
	// Display time and date of program execution.
	time_t p;
	time(&p);
	cout << "Time of execution: " << ctime(&p) << endl;

	// Declare variables
	int a[5]; char c[6]; float d[4]; string s[4];

	// Read data into each array
	cout << "Enter 5 integer numbers: "; ReadData(a, 5);
	cout << "Enter 6 characters: "; ReadData(c, 6);
	cout << "Enter 4 decimal numbers: "; ReadData(d, 4);
	cout << "Enter 4 names: "; ReadData(s, 4);

	// Display all arrays
	cout << "\tThis is array a: "; DisplayData(a, 5);
	cout << "\tThis is array c: "; DisplayData(c, 6);
	cout << fixed << setprecision(2) << "\tThis is array d: "; DisplayData(d, 4);
	cout << "\tThis is array s: "; DisplayData(s, 4);

	system("PAUSE");
	return 0;
}
//=== ReadData ====================================================================
// This function will read in data into a one-dimensional array
// Input:
//		x[] -- array of one dimension
//		n -- integer size of array
// Output:
//		Read in data into an array of size n
//=================================================================================
template <class TYPE>
void ReadData(TYPE x[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> x[i];
}
//=== DisplayData =================================================================
// This function will display a one-dimensional array
// Input:
//		x[] -- array of one dimension
//		n -- integer size of array
// Output:
//		Display the one dimensional array
//=================================================================================
template <class TYPE>
void DisplayData(TYPE x[], int n)
{
	for (int i = 0; i < n; i++)
		cout << x[i] << " ";
	cout << endl;
}
/*-------------------------OUTPUT----------------------------------------------
Time of execution : Sun Oct 19 12 : 00 : 38 2014

Enter 5 integer numbers : 9 3 8 2 7
Enter 6 characters : C S U F C S
Enter 4 decimal numbers : 2.3 7.5 8.33 4.1
Enter 4 names : Tom Bob Mary John
	This is array a : 9 3 8 2 7
	This is array c : C S U F C S
	This is array d : 2.30 7.50 8.33 4.10
	This is array s : Tom Bob Mary John
Press any key to continue . . .
-----------------------------------------------------------------------------*/
