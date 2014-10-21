//================================================================================
// File: Project 7.3.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Oct. 23, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 7  Part No. 3
// 
// Description:
// This program will read in a user provided name and find its length, write it in
// both lower case and upper case, and pick out the first name in upper case. It
// will also ask the user to provide another name and compare it to the first name.
//=================================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <string>
#include <cstring>

using namespace std;
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
	char fullName[30], friendName[20], firstName[20];

	// Ask for Name
	cout << "Enter your full name: ";
	cin.getline(fullName,30,'\n');

	// Name length, lower case name, and upper case name
	cout << "\tYour name's length is " << strlen(fullName) << endl;
	cout << "\tYour name in lower case: " << _strlwr(fullName) << endl;
	cout << "\tYour name in upper case: " << _strupr(fullName) << endl;
	cout << endl;

	// Find the first name and turn it into a char array
	string firstN;
	string fullN = string(fullName);

	for (int i = 0; i < fullN.find(' '); i++)
		firstN += fullN[i];

	strcpy(firstName, firstN.c_str());

	// Ask user for friend's first name
	cout << firstName << ", what is your friend's first name? ";
	cin.getline(friendName, 20, '\n');

	// Convert the friend's first name to uppercase and compare with user first name
	_strupr(friendName);

	if (strcmp(friendName, firstName) == 0)
		cout << "\tYour name is the same as your friend's name." << endl;
	else
		cout << "\tYou two have different first names." << endl;
	
	system("PAUSE");
	return 0;
}
/*-------------------------OUTPUT-----------------------------------------------------
Time of execution: Sat Oct 18 13:08:59 2014

Enter your full name: Barack H Obama
Your name's length is 14
Your name in lower case: barack h obama
Your name in upper case: BARACK H OBAMA

BARACK, what is your friend's first name? barack
Your name is the same as your friend's name.
Press any key to continue . . .
------------------------------------------------------------------------------------*/
