//================================================================================
// File: Project 3.3.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Sept. 18, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 3  Part No. 3 
// 
// Description:
//	This program will display random addition problems. The program will check the
// answer and will ask the user if he wants to continue. Once the user decides to
// not continue, the program will display the number of correct and incorrect.
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
	int x, y, answer, numberOfCorrect = 0, numberOfWrong = 0;
	char c;
	
	// Generate a random number seed
	srand(time(0));

	// Generates the addition problems. Also checks the answer
	// and lets the user know. It will also count the number
	// of Correct and Wrong answers.
	do
	{
		x = rand() % 100;
		y = rand() % 100;

		cout << x << " + " << y << " = ";
		cin >> answer;

		if(x+y == answer)
		{
			cout << "CORRECT\n";
			numberOfCorrect++;
		}
		else
		{
			cout << "WRONG\n";
			numberOfWrong++;
		}

		cout << "Continue (y/n)? ";
		cin >> c;
		c = toupper(c);
	} while(c == 'Y');

	// Display the number of correct and incorrect answers
	cout << endl;
	cout << "Number of CORRECT answers: " << numberOfCorrect << endl;
	cout << "Number of WRONG answers: " << numberOfWrong << endl;

	system("PAUSE");
	return 0;
}
/*-------------------------OUTPUT----------------------------------------------
Time of execution: Fri Sep 12 11:10:23 2014

37 + 78 = 115
CORRECT
Continue (y/n)? y
66 + 7 = 74
WRONG
Continue (y/n)? y
32 + 37 = 70
WRONG
Continue (y/n)? n

Number of CORRECT answers: 1
Number of WRONG answers: 2
Press any key to continue . . .
-----------------------------------------------------------------------------*/
