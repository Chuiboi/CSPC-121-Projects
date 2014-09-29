//================================================================================
// File: Project 5.4.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Oct. 2, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 5  Part No. 4 
// 
// Description:
//	This program will ask the user to enter their full name. The program will then
// display only the last name and prompt the user if they want to continue.
//=================================================================================

#include <iostream>
#include <string>
#include <ctime>

using namespace std;
string ReverseString(string s);

//== main =========================================================================
//
//=================================================================================

int main()
{
	// Display time and date of program execution.
	time_t p;
	time(&p);
	cout << "Time of execution: " << ctime(&p) << endl;

	// Decalre variables
	string fullName, reverseName, lastName; 
	char c;

	do
	{
		// Ask user for the full name
		cin.ignore();
		cout << "Please enter your full name: ";
		getline(cin, fullName);

		// Reverse the entered string
		reverseName = ReverseString(fullName);

		cout << fullName << ", your last name is ";

		// Figure out the last name by creating a new string of letters until
		// the first space in the reverseName
		lastName = " ";
		for(int i = 0; i < reverseName.find(" "); i++)
		{
			lastName += reverseName[i];
		}

		// Using ReverseString, reverse the last name so that
		// it is read out correctly
		cout << ReverseString(lastName);
		cout << endl;

		// Prompt user if they want to continue
		cout << "CONTINUE(y/n)? ";
		cin >> c;
		c = toupper(c);
	} while(c == 'Y');
	
	system("PAUSE");
	return 0;
}
//=== ReverseString ===============================================================
//
// This function will reverse a given string.
//
// Input:
//		s -- string that you want reversed
// Output:
//		Reverse of the provided string
//
//=================================================================================
string ReverseString(string s)
{
	string result = " ";
	for(int j = 0; j < s.length(); j++)
		result = s[j] + result;
	return result;
}
/*-------------------------OUTPUT----------------------------------------------
Time of execution: Mon Sep 29 12:17:27 2014

Please enter your full name: Bill Clinton
Bill Clinton, your last name is Clinton
CONTINUE(y/n)? Y
Please enter your full name: George W Bush
George W Bush, your last name is Bush
CONTINUE(y/n)? Y
Please enter your full name: Barack Hussein Obama
Barack Hussein Obama, your last name is Obama
CONTINUE(y/n)? N
Press any key to continue . . .
-----------------------------------------------------------------------------*/
