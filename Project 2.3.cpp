//---------------------------------------------------------------------------------//
//                        Name: Alexnader Chiu                                     //
//                        Project No. 2  Part No. 3                                //
//                        Due Date: Sept. 11, 2014                                 //
//                        Course: CPSC-121                                         //
//                        Instructor: Dr. Ray Ahmadnia                             //
//	This program will ask the user for the number of drinks and sandwiches.        //
//  It will then ask them for the size. The program will display a table with      //
//  prices, and the program will determine the total bill.                         //
//---------------------------------------------------------------------------------//
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <ctime>

// Setting the prices for the menu
const float SMALLDRINK_PRICE = 1.20;
const float MEDDRINK_PRICE = 1.50;
const float LARGEDRINK_PRICE = 1.70;
const float TENINCH_PRICE = 3.75;
const float TWELVEINCH_PRICE = 4.00;

using namespace std;

int main()
{
	// Declare variables
	int numberOfDrinks, numberOfSandwiches, sandwichLength;
	char size;
	float bill, priceOfDrinks, priceOfSandwich;

	// Generate the menu with prices
	cout << setfill('.');
	cout << fixed << showpoint << setprecision(2);
	cout << "----------Menu-----------\n";
	
	cout << left << setw(6) << "Drinks" << endl;
	cout << left << setw(15) << "\tSmall" << right << setw(8) << SMALLDRINK_PRICE << endl;
	cout << left << setw(15) << "\tMedium" << right << setw(8) << MEDDRINK_PRICE << endl;
	cout << left << setw(15) << "\tLarge" << right << setw(8) << LARGEDRINK_PRICE << endl;
	
	cout << left << setw(10) << "Sandwiches" << endl;
	cout << left << setw(15) << "\t10 inches" << right << setw(8) << TENINCH_PRICE << endl;
	cout << left << setw(15) << "\t12 inches" << right << setw(8) << TWELVEINCH_PRICE << endl;

	// Ask the user for the number of items and their sizes
	cout << "How many drinks? ";
	cin >> numberOfDrinks;
	cout << "\tWhat size(S=small, M=medium, L=large)? ";
	cin >> size;

	cout << "How many sandwiches? ";
	cin >> numberOfSandwiches;
	cout << "\tWhat size(12/10 inches)? ";
	cin >> sandwichLength;

	// Calculates the total bill using switch statements.
	// Calculates drink subtotal
	switch(size)
	{
		case 'S': case 's': priceOfDrinks = numberOfDrinks * SMALLDRINK_PRICE;
							break;
	
		case 'M': case 'm': priceOfDrinks = numberOfDrinks * MEDDRINK_PRICE;
							break;
	
		case 'L': case 'l':	priceOfDrinks = numberOfDrinks * LARGEDRINK_PRICE;
							break;
	
		default :           cout << "Invalid size, exiting program";
							system("PAUSE");
							exit(1);
	}

	// Calculates sandwich subtotal
	switch(sandwichLength)
	{
		case 10: priceOfSandwich = numberOfSandwiches * TENINCH_PRICE;
				 break;
	
		case 12: priceOfSandwich = numberOfSandwiches * TWELVEINCH_PRICE;
				 break;
		
		default: cout << "Invalid size, exiting program";
				 system("PAUSE");
				 exit(1);
	}

	// Calculate Total and displays it
	bill = priceOfDrinks + priceOfSandwich;
	cout << "Total bill = " << bill << endl;

	// Display time and date of program execution.
	time_t p;
	time(&p);
	cout << "Time of execution: " << ctime(&p) << endl;

	system("PAUSE");
	return 0;
}
/*-------------------------OUTPUT-----------------------------------------------------
----------Menu-----------
Drinks
        Small.............1.20
        Medium............1.50
        Large.............1.70
Sandwiches
        10 inches.........3.75
        12 inches.........4.00
How many drinks? 3
        What size(S=small, M=medium, L=large)? M
How many sandwiches? 3
        What size(12/10 inches)? 10
Total bill = 15.75
Time of execution: Sun Sep 07 13:28:54 2014

Press any key to continue . . .
------------------------------------------------------------------------------------*/
