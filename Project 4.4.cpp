//================================================================================
// File: Project 4.4.cpp, data.txt
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Sept. 25, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 4  Part No. 4 
// 
// Description:
//	This program will read a text file and display the contents. It will also find
// out the oldest person and who are the teenagers.
//=================================================================================

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <ctime>
#include <algorithm>
#include <fstream>

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

	// Delcare arrays and variables
	string Name[7];
	int Age[7];
	int ageIndex, teenIndex;

	// Read the text file (Using 7 because we know the size of the data file)
	fstream datafile;
	datafile.open("data.txt");
	if(!datafile)
		cout << "Error opening data file\n";
	else
	{
		for(int i = 0; i < 7; i++)
		{
			datafile >> Name[i] >> Age[i];
		}
	}
	datafile.close();

	// Display the contents of the file
	// Create Header
	cout << left << setw(10) << "Name";
	cout << left << setw(4) << "Age\n";
	for(int j = 0; j <= 14; j++)
		cout << char(196);
	cout << endl;

	// Display data (Using 7 because we know the size of the data file)
	for(int k = 0; k < 7; k++)
	{
		cout << left << setw(10) << Name[k];
		cout << left << setw(4) << Age[k] << endl;
	}
	cout << endl;

	// Determine the Oldest student and find out who are the teenagers
	// Determine the oldest
	int maxAge = Age[0];
	for(int age = 0; age < 7; age++)
	{
		if(Age[age] > maxAge)
		{
			maxAge = Age[age];
			ageIndex = age;
		}
	}
	cout << "Oldest Student: " << Name[ageIndex];
	
	// Determine the teenagers
	cout << "\nName of teenager students: ";
	for(int age = 0; age < 7; age++)
	{
		if(Age[age] >= 13 && Age[age] <= 19)
		{
			teenIndex = age;
			cout << Name[teenIndex] << " ";
		}
	}
	
	cout << endl;

	system("PAUSE");
}
/*-------------------------OUTPUT----------------------------------------------
Time of execution: Tue Sep 23 16:26:07 2014

Name      Age
───────────────
Jefferson 17
Bill      24
Mary      19
Jack      22
Matthew   19
Claudia   23
Judy      18

Oldest Student: Bill
Name of teenager students: Jefferson Mary Matthew Judy
Press any key to continue . . .
-----------------------------------------------------------------------------*/
