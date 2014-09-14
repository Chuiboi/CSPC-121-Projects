//================================================================================
// File: Project 3.1.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Sept. 18, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 3  Part No. 1 
// 
// Description:
//	This program will ask the user to enter a initial, final, and interval value.
// The program will then convert the given initial and final value into different
// currency values.
//=================================================================================

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <ctime>
#include <Windows.h>

// Declare the currency exchange rates
const float YENDOLLAR_EX = 107.35;
const float POUNDDOLLAR_EX = 0.61;
const float EURODOLLAR_EX = 0.77;

using namespace std;

//== main =========================================================================
//
//=================================================================================

int main()
{	
	// Set the console to use unicode instead of ASCII
	SetConsoleOutputCP(1252);

	// Display time and date of program execution.
	time_t p;
	time(&p);
	cout << "Time of execution: " << ctime(&p) << endl;

	// Declare variables
	float start, finish, jump;
	float yen, pound, euro;

	// Ask user for the initial, final, and interval values.
	cout << "Please enter the start, finish, and jump values for the\n";
	cout << "exchange table: ";
	cin >> start >> finish >> jump;

	cout << endl;
	cout << "$\t" << "\u00A5\t" << "\t\u00A3\t" <<"\u20AC\n";
	
	// Display the double solid line
	for(int j = 1; j <= 40; j++)
		cout << "=";
	cout << endl;

	// Calculate the currency values and display them
	cout << fixed << setprecision(2);

	for(int i = start; i <= finish; i+=jump)
	{
		yen = i * YENDOLLAR_EX;
		pound = i * POUNDDOLLAR_EX;
		euro = i * EURODOLLAR_EX;

		cout << left << setw(5) << i << "\t";
		cout << left << setw(10) << yen << "\t";
		cout << left << setw(5) << pound << "\t";
		cout << left << setw(5) << euro << "\n";
	}

	cout << endl;

	system("PAUSE");
	return 0;
}
/*-------------------------OUTPUT-----------------------------------------------------
Time of execution: Sun Sep 14 12:59:57 2014

Please enter the start, finish, and jump values for the
exchange table: 10 100 10

$       ¥               £       €
========================================
10      1073.50         6.10    7.70
20      2147.00         12.20   15.40
30      3220.50         18.30   23.10
40      4294.00         24.40   30.80
50      5367.50         30.50   38.50
60      6441.00         36.60   46.20
70      7514.50         42.70   53.90
80      8588.00         48.80   61.60
90      9661.50         54.90   69.30
100     10735.00        61.00   77.00

Press any key to continue . . .
------------------------------------------------------------------------------------*/
