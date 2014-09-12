//================================================================================
// File: Project 3.4.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Sept. 18, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 3  Part No. 4 
// 
// Description:
//	This program will ask the user to enter a string of yes and no votes. The
// program will count the number of votes and display the results.
//=================================================================================

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <ctime>

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
	int numberOfYes = 0, numberOfNo = 0;
	char c;

	// Ask user to enter a string of Y and N.
	cout << "Enter a string of Yes and No votes (Y/N): ";

	// Count the number of yes and no votes
	while(cin.get(c), c != '\n')
	{
		if(c == 'y' || c == 'Y')
			numberOfYes++;
		if(c == 'n' || c == 'N')
			numberOfNo++;
	}

	// Display the number of yes votes
	cout << "YES votes: ";
	for(int i = 1; i <= numberOfYes; i++)
		cout << "* ";
	cout << endl;

	// Display the number of no votes
	cout << "NO  votes: ";
	for(int j=1; j <= numberOfNo; j++)
		cout << "* ";
	cout << endl;

	system("PAUSE");
	return 0;
}
/*-------------------------OUTPUT----------------------------------------------
Time of execution: Fri Sep 12 12:20:52 2014

Enter a string of Yes and No votes (Y/N): yyNNNYYnn
YES votes: * * * *
NO  votes: * * * * *
Press any key to continue . . .
-----------------------------------------------------------------------------*/
