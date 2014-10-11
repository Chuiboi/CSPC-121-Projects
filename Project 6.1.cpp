//================================================================================
// File: Project 6.1.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Oct. 16, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 6  Part No. 1 
// 
// Description:
// This program will copy data from a file and display it as an array. The program
// will also calculate the minimum, maximum, and average of the array.
//=================================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <fstream>
#include <algorithm>
// Declare constants
const int N = 6;
using namespace std;
// Declare function prototypes
void CopyData(string fileName, int x[]);
void Display(int x[]);
void Display(int x[], float avg);
void Display(int max, int min);
float FindAve(int x[]);
void FindMaxMin(int x[], int& maximum, int& minimum);
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
	int a[N];
	
	// Copt data from file into array a;
	CopyData("data.txt", a);
	
	// Display array a
	Display(a);
	
	// Find and display the average of numbers in array a
	float average = FindAve(a);
	cout << "Average = " << average << endl;

	// Display numbers whose value is >= average
	Display(a, average);

	// Find and display the maximum and minimum numbers in array a
	int max, min;
	FindMaxMin(a, max, min);
	Display(max, min);

	system("PAUSE");
	return 0;
}
//=== CopyData ====================================================================
// This function will copy data into an array
// Input:
//		filename	-- name of the file that contains the data
//		x[] -- integer array that will store copied data
// Output:
//		Integer array with data values
//=================================================================================
void CopyData(string fileName, int x[])
{
	fstream f;
	f.open(fileName, ios::in);
	for (int i = 0; i < N; i++)
		f >> x[i];
	f.close();
}
//=== Display ====================================================================
// This function will display the data depending on the provided information
// Input:
//		x[], avg	-- integer array and average
//		x[] -- integer array 
//		max, min -- two integers
// Output:
//		x[], avg	-- will display data values above the average
//		x[] -- will display the array
//		max, min -- will display the maximum and minimum of the array
//=================================================================================
void Display(int x[])
{
	cout << "This is array a: ";
	for (int i = 0; i < N; i++)
		cout << x[i] << " ";
	cout << endl;
}
void Display(int x[], float avg)
{
	cout << "Data values above the average: ";
	for (int i = 0; i < N; i++)
		if (x[i] >= avg)
			cout << x[i] << " ";
	cout << endl;
}
void Display(int max, int min)
{
	cout << "Maximum = " << max << endl;
	cout << "Minimum = " << min << endl;
}
//=== FindAve =====================================================================
// This function will find the average of a given array
// Input:
//		x[] -- integer array that is holding the data
// Output:
//		Average of array
//=================================================================================
float FindAve(int x[])
{
	float total = 0;
	float average;
	for (int i = 0; i < N; i++)
		total += x[i];
	return average = total / N;
}
//=== FindMaxMin ==================================================================
// This function will find the maximum and minimum of an array
// Input:
//		x[] -- integer array that will store copied data
//		maximum, minimum -- reference variables to store the maximum and minimum
// Output:
//		Maximum and minimum values of the array
//=================================================================================
void FindMaxMin(int x[], int& maximum, int& minimum)
{
	maximum = x[0];
	minimum = x[0];
	for (int i = 1; i < N; i++)
	{
		if (x[i] > maximum)
			maximum = x[i];
		if (x[i] < minimum)
			minimum = x[i];
	}
}
/*-------------------------OUTPUT----------------------------------------------
Time of execution : Sat Oct 11 10 : 32 : 17 2014

This is array a : 44 33 19 9 70 11
Average = 31
Data values above the average : 44 33 70
Maximum = 70
Minimum = 9
Press any key to continue . . .
-----------------------------------------------------------------------------*/
