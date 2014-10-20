//================================================================================
// File: Project 7.2.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Oct. 23, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 7  Part No. 2
// 
// Description:
// This program will read in a file and determine the size of the dynamic array. 
// It will then read in the data and display the data.
//=================================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <iomanip>
#include <fstream>
// Declare structure
struct PERSON
{
	int age;
	float gpa;
	char name[20];
};
using namespace std;
void Display(PERSON x[], int numOfData);
//== main =========================================================================
//
//=================================================================================
int main()
{
	// Display time and date of program execution.
	time_t c;
	time(&c);
	cout << "Time of execution: " << ctime(&c) << endl;

	// Determine size of array and create a dynamic array
	char N;
	fstream dataFile;
	dataFile.open("two.txt", ios::in);
	dataFile.get(N);
	PERSON *p;
	p = new PERSON[int(N - 48)];

	// Read in data
	for (int i = 0; i < int(N-48); i++)
	{
		dataFile >> p[i].age;
		dataFile >> p[i].gpa;
		dataFile.getline(p[i].name, 20, '\n');
	}
	dataFile.close();

	// Display data
	Display(p,int(N-48));
	
	system("PAUSE");
	return 0;
}
//=== Display =====================================================================
// This function will display a one-dimensional array
// Input:
//		x[] -- array structure you want to display in a table
// Output:
//		Display either the array structure
//=================================================================================
void Display(PERSON x[], int numOfData)
{
	// Generate Header
	cout << left << setw(5) << "Age";
	cout << left << setw(5) << "GPA";
	cout << left << setw(20) << "Name";
	cout << endl;
	for (int j = 1; j <= 30; j++)
		cout << char(196);
	cout << endl;
	// Display data in table
	for (int i = 0; i < numOfData; i++)
	{
		cout << left << setw(5) << x[i].age;
		cout << left << setw(5) << x[i].gpa;
		cout << left << setw(20) << x[i].name;
		cout << endl;
	}
	cout << endl;
}
/*-------------------------OUTPUT-----------------------------------------------------
Time of execution: Mon Oct 20 11:45:49 2014

Age  GPA  Name
──────────────────────────────
22   2.2   Bill Clinton
33   3.3   Phil Jackson
44   4     Mary A Johnson
25   2.5   Adam Smith
65   3.2   George W Bush

Press any key to continue . . .
------------------------------------------------------------------------------------*/
