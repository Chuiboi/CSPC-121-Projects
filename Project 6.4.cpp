//================================================================================
// File: Project 6.4.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Oct. 16, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 6  Part No. 4
// 
// Description:
// This program will display use two functions to display the arrays, and another 
// function to sort the arrays.
//=================================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <algorithm>
#include <string>

using namespace std;
// Declare function prototypes
template <class TYPE>
void Display(TYPE x[], int n);
template <class TYPE>
void SortArray(TYPE x[], int n);
template <class TYPE>
void Show(TYPE x[], int n);
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
	int a[5] = { 1, 2, 3, 4, 5 };
	char c[6] = { 'a', 'r', 'r', 'a', 'y', 's' };
	string d[3] = { "try", "enjoy", "programming" };

	// Display arrays
	cout << "Array a using the Display function: ";
	Display(a, 5);
	cout << "Array c using the Display function: ";
	Display(c, 6);
	cout << "Array d using the Display function: ";
	Display(d, 3);
	cout << endl;

	// Sort and display the arrays
	SortArray(a, 5);
	SortArray(c, 6);
	SortArray(d, 3);

	cout << "Array a using the Show function: ";
	Show(a, 5);
	cout << "Array c using the Show function: ";
	Show(c, 6);
	cout << "Array d using the Show function: ";
	Show(d, 3);

	system("PAUSE");
	return 0;
}
//=== Display =====================================================================
// This function will display a one-dimensional array
// Input:
//		x[] -- integer array of one dimension
// Output:
//		Display the one dimensional array
//=================================================================================
template <class TYPE>
void Display(TYPE x[], int n)
{
	for (int i = 0; i < n; i++)
		cout << x[i] << " ";
	cout << endl;
}
//=== Sort ========================================================================
// This function will display a one-dimensional array
// Input:
//		x[] -- integer array of one dimension
// Output:
//		Display the one dimensional array
//=================================================================================
template <class TYPE>
void SortArray(TYPE x[], int n)
{
	sort(x, x + n);
}
//=== Show ========================================================================
// This function will display a one-dimensional array
// Input:
//		x[] -- integer array of one dimension
// Output:
//		Display the one dimensional array
//=================================================================================
template <class TYPE>
void Show(TYPE x[], int n)
{
	for (int i = 0; i < n; i++)
		cout << x[i] << " ";
	cout << endl;
}
/*-------------------------OUTPUT----------------------------------------------
Time of execution : Sun Oct 12 11 : 00 : 42 2014

Array a using the Display function : 1 2 3 4 5
Array c using the Display function : a r r a y s
Array d using the Display function : try enjoy programming

Array a using the Show function : 1 2 3 4 5
Array c using the Show function : a a r r s y
Array d using the Show function : enjoy programming try
Press any key to continue . . .
-----------------------------------------------------------------------------*/
