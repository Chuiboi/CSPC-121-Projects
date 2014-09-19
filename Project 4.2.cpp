//================================================================================
// File: Project 4.2.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Sept. 25, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 4  Part No. 2 
// 
// Description:
//	This program will display a table that lists 5 names and their respective 
// salaries. It will then calculate the average salary.
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

	// Declare the two arrays and total variable
	string Names[5] = {"Ronald Reagan", "Bill Clinton", "George Bush",
		"Barack Obama", "Jimmy Carter"};
	long int Salary[5] = {25000, 300000, 185000, 4500, 1300};
	long int total = 0;

	// Display the table of names and salaries
	cout << left << setw(15) << "Name" << left << setw(8) << "Salary" << endl;
	for(int j = 1; j <= 25; j++)
		cout << char(196);
	cout << endl;

	cout << setfill('.');
	for(int i = 0; i < 5; i++)
	{
		cout << left << setw(15) << Names[i] << right << setw(8) << Salary[i] << endl;
		total += Salary[i];
	}

	// Calculate and display average salary
	cout << "\nAverage salary is " << total/5. << endl;

	system("PAUSE");
}
/*-------------------------OUTPUT----------------------------------------------
Time of execution: Fri Sep 19 09:46:10 2014

Name           Salary
─────────────────────────
Ronald Reagan.....25000
Bill Clinton.....300000
George Bush......185000
Barack Obama.......4500
Jimmy Carter.......1300

Average salary is 103160
Press any key to continue . . .
-----------------------------------------------------------------------------*/
