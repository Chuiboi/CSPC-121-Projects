//================================================================================
// File: Project 6.2.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Oct. 16, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 6  Part No. 2
// 
// Description:
// This program will display a table of records from a file. It will also display
// the average age and average GPA.
//=================================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cstring>
#include <iomanip>
#include <fstream>
// Declare constant and array structure
const int N = 5;
struct RECORD
{
	char Name[15];
	int Age;
	float Gpa;
};
using namespace std;
// Declare function prototypes
void CopyRecords(string fileName, RECORD x[]);
void Display(RECORD x[]);
void Display(float ageAve, float gpaAve);
void AgeGpaAverage(RECORD x[], float& ageAve, float& gpaAve);
//== main =========================================================================
//
//=================================================================================
int main()
{
	// Display time and date of program execution.
	time_t t;
	time(&t);
	cout << "Time of execution: " << ctime(&t) << endl;

	// Declare variables
	RECORD p[N];
	float GpaAve, AgeAve;

	// Call functions to display the data and average age and GPA
	CopyRecords("Text.txt", p);
	Display(p);
	AgeGpaAverage(p, AgeAve, GpaAve);
	Display(AgeAve, GpaAve);

	system("PAUSE");
	return 0;
}
//=== CopyRecords =================================================================
// This function will display a one-dimensional array
// Input:
//		x[] -- RECORD array of which will hold the data values
//      fileName -- string for the data file name
// Output:
//		Reads in data into the array
//=================================================================================
void CopyRecords(string fileName, RECORD x[])
{
	fstream dataFile;
	dataFile.open(fileName, ios::in);
	for (int i = 0; i < N; i++)
	{
		dataFile.getline(x[i].Name,16,'/');
		dataFile >> x[i].Age;
		dataFile >> x[i].Gpa;
	}
	dataFile.close();
}
//=== Display =====================================================================
// This function will display a one-dimensional array
// Input:
//		x[] -- array structure you want to display in a table
//		ageAve, gpaAve -- the averages you want to display
// Output:
//		Display either the array structure or average age and GPA
//=================================================================================
void Display(RECORD x[])
{
	// Generate Header
	cout << left << setw(20) << "Name";
	cout << left << setw(5) << "Age";
	cout << left << setw(5) << "GPA";
	cout << endl;
	for (int j = 1; j <= 30; j++)
		cout << char(196);
	cout << endl;
	// Display data in table
	for (int i = 0; i < N; i++)
	{
		cout << left << setw(20) << x[i].Name;
		cout << left << setw(5) << x[i].Age;
		cout << left << setw(5) << x[i].Gpa;
	}
	cout << endl;
}
void Display(float ageAve, float gpaAve)
{
	cout << "Their AGE avereage is " << ageAve;
	cout << " and their GPA avereage is " << gpaAve;
	cout << endl;
}
//=== AgeGpaAverage ===============================================================
// This function will display a one-dimensional array
// Input:
//		x[] -- array structure that holds the data
//		ageAve -- reference variable for the average age
//		gpaAve -- reference variable for the average GPA
// Output:
//		Calculates the average age and GPA
//=================================================================================
void AgeGpaAverage(RECORD x[], float& ageAve, float& gpaAve)
{
	float totalAge = 0, totalGPA = 0;
	for (int i = 0; i < N; i++)
	{
		totalAge += x[i].Age;
		totalGPA += x[i].Gpa;
	}
	ageAve = totalAge / N;
	gpaAve = totalGPA / N;
}
/*-------------------------OUTPUT----------------------------------------------
Time of execution : Tue Oct 14 19 : 56 : 06 2014

Name                Age  GPA
──────────────────────────────
Martin Smith        22   2.2
Austin Clinton     18   3.1
Johnson            19   2.9
Maggie Jones       23   2.3
Tyler W Brown      16   3.4
Their AGE avereage is 19.6 and their GPA avereage is 2.78
Press any key to continue . . .
-----------------------------------------------------------------------------*/
