//---------------------------------------------------------------------------------//
//                        Name: Alexnader Chiu                                     //
//                        Project No. 2  Part No. 1                                //
//                        Due Date: Sept. 11, 2014                                 //
//                        Course: CPSC-121                                         //
//                        Instructor: Dr. Ray Ahmadnia                             //
//	This program will ask the user for their name, age, and gender. It will then   //
//  display a table with prices, and the program will determine the memebership    //
//	fee with tax.                                                                  //
//---------------------------------------------------------------------------------//
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <ctime>

// Setting the prices for the health club
const float CHILDMALE_PRICE = 50.00;
const float CHILDFEMALE_PRICE = 55.00;
const float TEENMALE_PRICE = 150.00;
const float TEENFEMALE_PRICE = 155.00;
const float ADULTMALE_PRICE = 275.00;
const float ADULTFEMALE_PRICE = 250.00;

using namespace std;

int main()
{
	// Declare variables
	int age;
	char gender;
	string fullName;
	float membershipFee, tax = 1.10;

	// Generate Price Table
	cout << setfill('.');
	cout << fixed << showpoint << setprecision(2);
	cout << "----Fullerton Health Club-----\n";
	
	cout << left << setw(25) << "Children (Age 1-12)" << endl;
	cout << left << setw(15) << "\tMale" << right << setw(8) << CHILDMALE_PRICE << endl;
	cout << left << setw(15) << "\tFemale" << right << setw(8) << CHILDFEMALE_PRICE << endl;
	
	cout << left << setw(25) << "Teenagers (Age 13-19)" << endl;
	cout << left << setw(15) << "\tMale" << right << setw(8) << TEENMALE_PRICE << endl;
	cout << left << setw(15) << "\tFemale" << right << setw(8) << TEENFEMALE_PRICE << endl;

	cout << left << setw(25) << "Adults (Age > 19)" << endl;
	cout << left << setw(15) << "\tMale" << right << setw(8) << ADULTMALE_PRICE << endl;
	cout << left << setw(15) << "\tFemale" << right << setw(8) << ADULTFEMALE_PRICE << endl;

	// Ask for age
	cout << "Enter your age: ";
	cin >> age;

	// Ask for gender
	cout << "Enter your gender(m/f): ";
	cin >> gender;

	// Ask for name
	cout << "Enter your full name: ";
	cin.ignore();
	getline(cin,fullName);

	// Determine the price based on the user provided information.
	switch(gender)
	{
		case 'm': case 'M': if(age > 19)
								membershipFee = ADULTMALE_PRICE * tax;
							else if(age >= 13)
								membershipFee = TEENMALE_PRICE * tax;
							else
								membershipFee = CHILDMALE_PRICE * tax;
							cout << "Hello Mr. " << fullName;
							cout << ", your membership fee is " << membershipFee;
							cout << " (10% tax is included).\n";
							break;
		
		case 'f': case 'F': if(age > 19)
								membershipFee = ADULTFEMALE_PRICE * tax;
							else if(age >= 13)
								membershipFee = TEENFEMALE_PRICE * tax;
							else
								membershipFee = CHILDFEMALE_PRICE * tax;
							cout << "Hello Ms./Mrs. " << fullName;
							cout << ", your membership fee is " << membershipFee;
							cout << " (10% tax is included).\n";
							break;
		
		default:			cout << "Invalid gender, exiting program\n";
							system("PAUSE");
							exit(1);
	}
	
	// Display time and date of program execution.
	time_t p;
	time(&p);
	cout << "Time of execution: " << ctime(&p) << endl;

	system("PAUSE");
	return 0;
}
/*-------------------------OUTPUT-----------------------------------------------------
----Fullerton Health Club-----
Children (Age 1-12)......
        Male.............50.00
        Female...........55.00
Teenagers (Age 13-19)....
        Male............150.00
        Female..........155.00
Adults (Age > 19)........
        Male............275.00
        Female..........250.00
Enter your age: 48
Enter your gender(m/f): M
Enter your full name: Barack H Obama
Hello Mr. Barack H Obama, your membership fee is 302.50 (10% tax is included).
Time of execution: Sun Sep 07 10:38:13 2014

Press any key to continue . . .
------------------------------------------------------------------------------------*/
