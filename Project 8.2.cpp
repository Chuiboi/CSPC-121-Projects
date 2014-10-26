//================================================================================
// File: Project 8.2.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Oct. 30, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 8  Part No. 2
// 
// Description:
// This program will ask the user for the number of records. It will then generate
// a dynamic array. The user will then enter the information, and the program will
// display the information.
//=================================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <cstring>
#include <cctype>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
// Declare structure
struct PERSON{ string name; int age; float gpa; };
// Declare function prototype
void Display(PERSON x[], int numData);
//== main =========================================================================
//=================================================================================
int main()
{
	// Display time and date of program execution.
	time_t c;
	time(&c);
	cout << "Time of execution: " << ctime(&c) << endl;
	
	// Declare variables
	int N;

	// Ask user for the number of records
	cout << "Enter the number of records: ";
	cin >> N;

	// Generate new dynamic array
	PERSON *p;
	p = new PERSON[N];

	// Ask user to enter the information
	for (int i = 0; i < N; i++)
	{
		cout << "Enter name, age, and gpa: ";
		cin >> p[i].name >> p[i].age >> p[i].gpa;
	}

	// Display results
	Display(p, N);

	system("PAUSE");
	return 0;
}
//=== Display =====================================================================
// This function will display a one-dimensional array
// Input:
//		x[] -- array structure you want to display in a table
//		numData -- number of data points to display
// Output:
//		Display a table of the array structure
//=================================================================================
void Display(PERSON x[], int numData)
{
	// Generate Header
	cout << fixed << setprecision(2);
	cout << left << setw(20) << "Name";
	cout << left << setw(5) << "Age";
	cout << left << setw(5) << "GPA";
	cout << endl;
	for (int j = 1; j <= 30; j++)
		cout << char(196);
	cout << endl;
	// Display data in table
	for (int i = 0; i < numData; i++)
	{
		cout << left << setw(20) << x[i].name;
		cout << left << setw(5) << x[i].age;
		cout << left << setw(5) << x[i].gpa;
		cout << endl;
	}
	cout << endl;
}
/*-------------------------OUTPUT-----------------------------------------------------
Time of execution : Sun Oct 26 09 : 38 : 34 2014

Enter the number of records : 3
Enter name, age, and gpa : Robert 21 2.1
Enter name, age, and gpa : Kristal 20 2
Enter name, age, and gpa : Joseph 22 3.1
Name                Age  GPA
──────────────────────────────
Robert              21   2.10
Kristal             20   2.00
Joseph              22   3.10

Press any key to continue . . .
------------------------------------------------------------------------------------*/
