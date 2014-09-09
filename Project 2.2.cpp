//================================================================================
// File: Project 2.2.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Sept. 11, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 2  Part No. 2 
// 
// Description:
//	This program will ask the user for two fractions. The user will also enter
//  their desired operator. The program will calculate and display the answer. 
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
	float a, b, c, d, numerator, denominator;
	char symbol;

	// Ask the user to input fractions
	cout << "Enter a fraction: ";
	cin >> a;
	cin.ignore();
	cin >> b;

	cout << "Enter another fraction: ";
	cin >> c;
	cin.ignore();
	cin >> d;

	// Asks user to select an arithemetic operator
	cout << "\tEnter an operation symbol (+,-,*,/): ";
	cin >> symbol;
	switch(symbol)
	{
		case '+': numerator = (a*d) + (b*c);
				  denominator = b*d;
				  break;
		case '-': numerator = (a*d) - (b*c);
				  denominator = b*d;
				  break;
		case '*': numerator = a*c;
				  denominator = b*d;
				  break;
		case '/': numerator = a*d;
				  denominator = b*c;
				  break;
	}
	
	// Display expression and solution
	cout << fixed << setprecision(2);
	cout << "\t\t(" << a << "/" << b << ") " << symbol; 
	cout << " (" << c << "/" << d << ") = ";
	cout << numerator << " / " << denominator << endl;

	system("PAUSE");
	return 0;
}

/*-------------------------OUTPUT-----------------------------------------------------
Time of execution: Wed Sep 10 05:46:22 2014

Enter a fraction: 12/5
Enter another fraction: 2.1/7.5
        Enter an operation symbol (+,-,*,/): *
                (12.00/5.00) * (2.10/7.50) = 25.20 / 37.50
Press any key to continue . . .
------------------------------------------------------------------------------------*/
