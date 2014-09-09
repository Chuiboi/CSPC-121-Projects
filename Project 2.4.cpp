//================================================================================
// File: Project 2.4.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Sept. 11, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 2  Part No. 4 
// 
// Description:
//	This program will ask the user to input the date in the form of mm/dd/yyyy.    
//  It will then display the date in the form of Month Day, Year.                                                   
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
	int month, day, year;
	string nameOfMonth;

	// User provides date
	cout << "Enter today's date: ";
	cin >> month;
	cin.ignore();
	cin >> day;
	cin.ignore();
	cin >> year;

	// Converts user provided date to the format Month Day, Year
	// Determine the name of month
	switch(month)
	{
		case 1: nameOfMonth = "Jan";
				break;
		case 2: nameOfMonth = "Feb";
				break;
		case 3: nameOfMonth = "Mar";
				break;
		case 4: nameOfMonth = "Apr";
				break;
		case 5: nameOfMonth = "May";
				break;
		case 6: nameOfMonth = "Jun";
				break;
		case 7: nameOfMonth = "Jul";
				break;
		case 8: nameOfMonth = "Aug";
				break;
		case 9: nameOfMonth = "Sept";
				break;
		case 10: nameOfMonth = "Oct";
				 break;
		case 11: nameOfMonth = "Nov";
				 break;
		case 12: nameOfMonth = "Dec";
				 break;
		default: cout << "Invalid month, existing program\n";
				 system("PAUSE");
				 exit(1);
	}

	switch(day)
	{
	case 1: case 21: case 31: cout << "Today is " << nameOfMonth << " " << day << "st";
							  cout << ", " << year << endl;
							  break;
	case 2: case 22:          cout << "Today is " << nameOfMonth << " " << day << "nd";
							  cout << ", " << year << endl;
							  break;
	case 3: case 23:          cout << "Today is " << nameOfMonth << " " << day << "rd";
							  cout << ", " << year << endl;
							  break;
	default:                  cout << "Today is " << nameOfMonth << " " << day << "th";
							  cout << ", " << year << endl;
							  break;
	}

	system("PAUSE");
	return 0;
}
/*-------------------------OUTPUT-----------------------------------------------------
Time of execution: Wed Sep 10 05:52:41 2014

Enter today's date: 9/10/2014
Today is Sept 10th, 2014
Press any key to continue . . .
------------------------------------------------------------------------------------*/
