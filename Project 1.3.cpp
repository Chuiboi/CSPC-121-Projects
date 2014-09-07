//---------------------------------------------------------------------------------//
//                        Name: Alexnader Chiu                                     //
//                        Project No. 1  Part No. 3                                //
//                        Due Date: Sept. 4, 2014                                  //
//                        Course: CPSC-121                                         //
//                        Instructor: Dr. Ray Ahmadnia                             //
//	This program will produce a menu with two items with their prices. It will     //
//	then ask the user how many of the items they want and gives them the total.    //
//---------------------------------------------------------------------------------//

#include <cmath>
#include <iomanip>
#include <iostream>
// Prices are set
const float COKE_PRICE = 2.10;
const float HAM_PRICE = 1.85;

using namespace std;

int main()
{
	int numberOfCoke = 0, numberOfHam = 0;
	float totalPrice = 0;

	// Generates the in-console menu that lists the item and price of the item //
	cout << setfill('.');
	cout << fixed << showpoint << setprecision(2);
	cout << "-------------Menu-------------\n";
	cout << left << setw(15) << "Coke" << right << setw(15) << COKE_PRICE << endl;
	cout << left << setw(15) << "Hamburger" << right << setw(15) << HAM_PRICE << endl;
	cout << endl;

	// Asks the customer how many of each item he wants //
	cout << "\tHow many cokes?: ";
	cin >> numberOfCoke;

	cout << "\tHow many hamburgers?: ";
	cin >> numberOfHam;

	// Calculate the total balance //
	totalPrice = (numberOfCoke * COKE_PRICE) + (numberOfHam * HAM_PRICE);

	// Display balance //
	cout << "\t\tYour total bill = " << totalPrice << endl;

	system("PAUSE");
	return 0;
}
/*-------------------------OUTPUT-----------------------------------------------------
-------------Menu-------------
Coke......................2.10
Hamburger.................1.85

        How many cokes?: 3
        How many hamburgers?: 2
                Your total bill = 10.00
Press any key to continue . . .
------------------------------------------------------------------------------------*/
