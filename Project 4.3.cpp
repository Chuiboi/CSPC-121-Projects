//================================================================================
// File: Project 4.3.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Sept. 25, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 4  Part No. 3 
// 
// Description:
//	This program will display a table that shows the number of shirts based on
// size and color. It will then calculate the total number of shirts, number of 
// blue shirts, and number of large shirts.
//=================================================================================

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <ctime>
#include <algorithm>

using namespace std;

//== main =========================================================================
//
//=================================================================================

void main()
{
	// Display time and date of program execution.
	time_t p;
	time(&p);
	cout << "Time of execution: " << ctime(&p) << endl;

	// Declare arrays
	string Color[3] = {"RED", "BLUE", "PINK"}; 
	string Size[4] = {"S", "M", "L", "XL"};
	int Shirts[3][4] = 
		{22, 30, 10, 7,
		21, 23, 7, 11,
		8, 11, 10, 12};

	// Declare variables
	int totalShirts = 0, totalBlue = 0, totalLarge = 0;

	// Display the Array in a grid
	// Display Size header
	for(int j = 0; j < 4; j++)
		cout << right <<"\t" << Size[j];
	cout << endl;

	for(int row = 0; row < 3; row++)
	{
		// Display Color header
		cout << left << setw(5) << Color[row]<< char(179);

		for(int col = 0; col < 4; col++)
		{
			cout << right << setw(6) << Shirts[row][col]<< char(179);
		}
		cout << endl;

		for(int i = 0; i < 34; i++)
			cout << char(196);
		cout << endl;
	}

	cout << endl;

	// Calculate the totals
	// Calculate the number of shirts
	for(int color = 0; color < 3; color++)
	{
		for(int size = 0; size < 4; size++)
			totalShirts += Shirts[color][size];
	}

	// Calculate the number of blue shirts
	for(int size = 0; size < 4; size++)
		totalBlue += Shirts[1][size];

	// Calculate the number of large shirts
	for(int color = 0; color < 3; color++)
		totalLarge += Shirts[color][2];

	// Display shirt counts
	cout << "Total number of T-Shirts: " << totalShirts << endl;
	cout << "Total number of BLUE shirts: " << totalBlue << endl;
	cout << "Total number of LARGE shirts: " << totalLarge << endl;

	system("PAUSE");
}
/*-------------------------OUTPUT----------------------------------------------
Time of execution: Sun Sep 21 13:20:13 2014

        S       M       L       XL
RED  │    22│    30│    10│     7│
──────────────────────────────────
BLUE │    21│    23│     7│    11│
──────────────────────────────────
PINK │     8│    11│    10│    12│
──────────────────────────────────

Total number of T-Shirts: 172
Total number of BLUE shirts: 62
Total number of LARGE shirts: 27
Press any key to continue . . .
-----------------------------------------------------------------------------*/
