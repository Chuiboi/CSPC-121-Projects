//---------------------------------------------------------------------------------//
//                        Name: Alexnader Chiu                                     //
//                        Project No. 2  Part No. 5                                //
//                        Due Date: Sept. 11, 2014                                 //
//                        Course: CPSC-121                                         //
//                        Instructor: Dr. Ray Ahmadnia                             //
//	This program will ask the user to input a number less than one thousand. The   //
//  program will then display that number in words.                                //
//---------------------------------------------------------------------------------//
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	// Declare variables
	int number, hundreds, tens, specialTens, ones;

	// Ask user to input a number
	cout << "Enter a number < 1000: ";
	cin >> number;
	cout << "\tYou entered ";
	// Translate the number into words
	hundreds = number / 100;
	tens = number % 100;
	ones = number % 10;

	// Determine the hundreds
	switch(hundreds)
	{
		case 1: cout << "One Hundred ";
				break;
		case 2: cout << "Two Hundred ";
				break;
		case 3: cout << "Three Hundred ";
				break;
		case 4: cout << "Four Hundred ";
				break;
		case 5: cout << "Five Hundred ";
				break;
		case 6: cout << "Six Hundred ";
				break;
		case 7: cout << "Seven Hundred ";
				break;
		case 8: cout << "Eight Hundred ";
				break;
		case 9: cout << "Nine Hundred ";
				break;
		default:break;
	}

	// Determine the tens including the special cases
	if(tens >= 20 && tens < 30)
		cout << "Twenty ";
	else if(tens >= 30 && tens < 40)
		cout << "Thirty ";
	else if(tens >= 40 && tens < 50)
		cout << "Fourty ";
	else if(tens >= 50 && tens < 60)
		cout << "Fifty ";
	else if(tens >= 60 && tens < 70)
		cout << "Sixty ";
	else if(tens >= 70 && tens < 80)
		cout << "Seventy ";
	else if(tens >= 80 && tens < 90)
		cout << "Eighty ";
	else if(tens >= 90 && tens < 100)
		cout << "Ninety ";
	else if(tens >= 10 && tens < 20)
		{
			specialTens = tens;
			if(specialTens == 10)
				cout << "Ten";
			else if(specialTens == 11)
				cout << "Eleven";
			else if(specialTens == 12)
				cout << "Twelve";
			else if(specialTens == 13)			 
				cout << "Thirteen";
			else if(specialTens == 14)			 
				cout << "Fourteen";
			else if(specialTens == 15)			 
				cout << "Fifteen";
			else if(specialTens == 16)			 
				cout << "Sixteen";
			else if(specialTens == 17)			 
				cout << "Seventeen";
			else if(specialTens == 18)			 
				cout << "Eighteen";
			else if(specialTens == 19)			 
				cout << "Nineteen";
		}
	
	// Determine the units place
	if(tens < 10 || tens >= 20)
	{
		switch(ones)
		{
			
			case 1: cout << "One";
					break;
			case 2: cout << "Two";
					break;
			case 3: cout << "Three";
					break;
			case 4: cout << "Four";
					break;
			case 5: cout << "Five";
					break;
			case 6: cout << "Six";
					break;
			case 7: cout << "Seven";
					break;
			case 8: cout << "Eight";
					break;
			case 9: cout << "Nine";
					break;
			default: break;
		}
	}
	
	// Display time and date of program execution.
	time_t p;
	time(&p);
	cout << "\nTime of execution: " << ctime(&p) << endl;

	system("PAUSE");
	return 0;
}
/*-------------------------OUTPUT-----------------------------------------------------
Enter a number < 1000: 405
        You entered Four Hundred Five
Time of execution: Mon Sep 08 22:07:49 2014


Enter a number < 1000: 77
        You entered Seventy Seven
Time of execution: Mon Sep 08 22:08:16 2014


Enter a number < 1000: 129
        You entered One Hundred Twenty Nine
Time of execution: Mon Sep 08 22:08:32 2014


Enter a number < 1000: 350
        You entered Three Hundred Fifty
Time of execution: Mon Sep 08 22:08:47 2014


Enter a number < 1000: 911
        You entered Nine Hundred Eleven
Time of execution: Mon Sep 08 22:09:47 2014

------------------------------------------------------------------------------------*/
