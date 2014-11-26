//================================================================================
// File: Project 10.1.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Nov. 13, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 10  Part No. 1
// 
// Description:
// This program will ask the user for the vertices. It will then draw a rectangle
// and calculate the perimeter.
//=================================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <string>
#include "STACKLIB.h"
using namespace std;
//== main =========================================================================
//=================================================================================
int main()
{
	// Display time and date of program execution.
	time_t c;
	time(&c);
	cout << "Time of execution: " << ctime(&c) << endl;
	
	// Declare variables
	STACK<char> p;
	STACK<int> s;
	int n, base;
	char thanksgiving;

	// Clear Stacks
	s.ClearStack();
	p.ClearStack();

	// Ask user to enter a sentence and display the reverse of it
	cout << "Enter a sentence: ";
	while (cin.get(thanksgiving) && thanksgiving != '\n')
	{
		if (!p.FullStack())	p.PushStack(thanksgiving);
		else cout << "Stack Full" << endl;
	}
	cout << "Sentence in reverse order is ";
	while (!p.EmptyStack())
	{
		char reverse = p.PopStack();
		cout << reverse;
	}
	cout << endl << endl;

	// Ask the user for an integer and a base. Display the integer in the new base
	cout << "Enter an integer number <100: ";
	cin >> n;

	cout << "Enter a new base(2,8,16): ";
	cin >> base;
	cout << n << " at base " << base << " is ";

	// Collect the remainders
	while (n != 0)
	{
		int r = n%base;
		s.PushStack(r);
		n /= base;
	}

	// Use the remainders for displaying the integer in new base
	while (!s.EmptyStack())
	{
		int r = s.PopStack();
		switch (r)
		{ 
		case 0: cout << "0"; break;
		case 1: cout << "1"; break;
		case 2: cout << "2"; break;
		case 3: cout << "3"; break;
		case 4: cout << "4"; break;
		case 5: cout << "5"; break;
		case 6: cout << "6"; break;
		case 7: cout << "7"; break;
		case 8: cout << "8"; break;
		case 9: cout << "9"; break;
		case 10: cout << "A"; break;
		case 11: cout << "B"; break;
		case 12: cout << "C"; break;
		case 13: cout << "D"; break;
		case 14: cout << "E"; break;
		case 15: cout << "F"; break;
		}
	}
	cout << endl;
	
	system("PAUSE");
	return 0;
}
/*-------------------------OUTPUT-----------------------------------------------------
Time of execution: Tue Nov 25 16:44:44 2014

Enter a sentence: Happy Thanksgiving
Sentence in reverse order is gnivigsknahT yppaH

Enter an integer number <100: 58
Enter a new base(2,8,16): 2
58 at base 2 is 111010
Press any key to continue . . .

Next Base Iteration:
Enter an integer number <100: 58
Enter a new base(2,8,16): 8
58 at base 8 is 72
Press any key to continue . . .

Next Base Iteration:
Enter an integer number <100: 58
Enter a new base(2,8,16): 16
58 at base 16 is 3A
Press any key to continue . . .
------------------------------------------------------------------------------------*/
