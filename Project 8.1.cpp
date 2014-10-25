//================================================================================
// File: Project 8.1.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Oct. 30, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 8  Part No. 1
// 
// Description:
// This program will generate 30 random numbers between 0 to 9. It will then 
// count the frequency of those numbers and display a table with the max and min 
// frequency.
//=================================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <random>
#include <iomanip>
// Declare structure
struct NUM{ int n; int freq; };
using namespace std;
// Declare function prototypes
void Count(NUM x[], int y[]);
void Display(NUM x[]);
//== main =========================================================================
//=================================================================================
int main()
{
	// Display time and date of program execution.
	time_t p;
	time(&p);
	cout << "Time of execution: " << ctime(&p) << endl;
	
	// Declare variables
	NUM All[10] = { { 0, 0 }, { 1, 0 }, { 2, 0 }, { 3, 0 }, { 4, 0 },
					{5, 0}, { 6, 0 }, { 7, 0 }, { 8, 0 }, { 9, 0 } };
	int num[30];
	
	// Set the random seed
	srand(time(0));

	// Create the random integer array
	for (int i = 0; i < 30; i++)
		num[i] = rand() % 10;

	// Count and Display the results
	Count(All, num);
	Display(All);

	system("PAUSE");
	return 0;
}
//=== Count =======================================================================
// This function will calculate the nth Fibonacci number through a recursive method
// Input:
//		x[] -- array structure that will count the frequency.
//		y[] -- array that contains the 30 integers
// Output:
//		Counts the frequency of the number array
//=================================================================================
void Count(NUM x[], int y[])
{
	for (int i = 0; i < 30; i++)
	{
		switch (y[i])
		{
		case 0: ++x[0].freq; break;
		case 1: ++x[1].freq; break;
		case 2: ++x[2].freq; break;
		case 3: ++x[3].freq; break;
		case 4: ++x[4].freq; break;
		case 5: ++x[5].freq; break;
		case 6: ++x[6].freq; break;
		case 7: ++x[7].freq; break;
		case 8: ++x[8].freq; break;
		case 9: ++x[9].freq; break;
		}
	}
}
//=== Display =====================================================================
// This function will display the table and calculate the max and min frequency
// Input:
//		x[] -- array structure that contains the number and frequency
// Output:
//		Table with max and min frequency
//=================================================================================
void Display(NUM x[])
{
	// Generate Header
	cout << left << setw(7) << "Number";
	cout << left << setw(10) << "Frequency";
	cout << endl;
	for (int j = 1; j <= 30; j++)
		cout << char(196);
	cout << endl;
	// Display data in table
	for (int i = 0; i < 10; i++)
	{
		cout << left << setw(7) << x[i].n;
		cout << left << setw(10) << x[i].freq;
		cout << endl;
	}
	cout << endl;
	
	// Find the highest and lowest frequency and the corresponding number
	int maxFreq = x[0].freq, minFreq = x[0].freq;
	for (int i = 1; i < 10; i++)
	{
		if (x[i].freq > maxFreq)
			maxFreq = x[i].freq;
		if (x[i].freq < minFreq)
			minFreq = x[i].freq;
	}

	// Display the number with the highest and lowest frequency
	cout << "Number(s) with the largest frequency of " << maxFreq << " is/are ";
	for (int i = 0; i < 10; i++)
	{
		if (x[i].freq == maxFreq)
			cout << x[i].n << " ";
	}
	cout << endl;
	cout << "Number(s) with the smallest frequency of " << minFreq << " is/are ";
	for (int i = 0; i < 10; i++)
	{
		if (x[i].freq == minFreq)
			cout << x[i].n << " ";
	}
	cout << endl;
}
/*-------------------------OUTPUT-----------------------------------------------------
Time of execution : Sat Oct 25 11 : 30 : 22 2014

Number Frequency
──────────────────────────────
0      4
1      4
2      1
3      2
4      2
5      6
6      2
7      4
8      4
9      1

Number(s) with the largest frequency of 6 is / are 5
Number(s) with the smallest frequency of 1 is / are 2 9
Press any key to continue . . .
------------------------------------------------------------------------------------*/
