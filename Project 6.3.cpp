//================================================================================
// File: Project 6.3.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Oct. 16, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 6  Part No. 3 
// 
// Description:
// This program will display three arrays of different dimensions
//=================================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;
// Declare function prototypes
void DisplayA(int x[]);
void DisplayB(int x[][4]);
void DisplayC(int x[][3][2]);
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
	int b[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int c[2][3][2] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

	// Display arrays
	cout << "This is array a\n";
	DisplayA(a);
	cout << "This is array b\n";
	DisplayB(b);
	cout << "This is array c\n";
	DisplayC(c);
	
	system("PAUSE");
	return 0;
}
//=== DisplayA ====================================================================
// This function will display a one-dimensional array
// Input:
//		x[] -- integer array of one dimension
// Output:
//		Display the one dimensional array
//=================================================================================
void DisplayA(int x[])
{
	for (int i = 0; i < 5; i++)
		cout << x[i] << " ";
	cout << endl;
}
//=== DisplayB ====================================================================
// This function will display a two-dimensional array
// Input:
//		x[][4] -- integer array of two dimensions with four columns
// Output:
//		Display the two dimensional array
//=================================================================================
void DisplayB(int x[][4])
{
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 4; col++)
			cout << x[row][col] << " ";
		cout << endl;
	}
}
//=== DisplayC ====================================================================
// This function will display a three-dimensional array
// Input:
//		x[][3][2] -- integer array of three dimensions with three columns and two
//					 slices
// Output:
//		Display the three dimensional array
//=================================================================================
void DisplayC(int x[][3][2])
{
	for (int row = 0; row < 2; row++)
	{
		cout << "Row = " << row << endl;
		for (int col = 0; col < 3; col++)
		{
			for (int slice = 0; slice < 2; slice++)
				cout << x[row][col][slice] << " ";
			cout << endl;
		}
	}
}
/*-------------------------OUTPUT----------------------------------------------
Time of execution: Sat Oct 11 11:41:51 2014

This is array a
1 2 3 4 5
This is array b
1 2 3 4
5 6 7 8
9 10 11 12
This is array c
Row = 0
1 2
3 4
5 6
Row = 1
7 8
9 10
11 12
Press any key to continue . . .
-----------------------------------------------------------------------------*/
