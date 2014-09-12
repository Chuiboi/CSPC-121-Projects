//================================================================================
// File: Project 3.2.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Sept. 18, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 3  Part No. 2 
// 
// Description:
//	This program will ask the user to enter a sentence. The program will then count
// the number of uppercase letter, digits, and vowels.
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

	// Declare variables.
	int numberOfDigits = 0, numberOfUpper = 0, numberOfVowels = 0;
	char c;

	// Ask the user for a sentence
	cout << "Enter a sentence: ";

	// While loop that counts the characters that fall under certain criteria
	while(cin.get(c), c != '\n')
	{
		if(c >= 'A' && c <= 'Z')
			numberOfUpper++;
		
		if(c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u')
			numberOfVowels++;

		if(c >= '0' && c <= '9')
			numberOfDigits++;
	}

	// Display the results in an organized manner
	cout << setfill('.');
	cout << left << setw(28) << "Number of uppercase letters" 
		<< right << setw(7) << numberOfUpper << endl;
	cout << left << setw(28) << "Number of digits" 
		<< right << setw(7) << numberOfDigits << endl;
	cout << left << setw(28) << "Number of vowels" 
		<< right << setw(7) << numberOfVowels << endl;

	system("PAUSE");
	return 0;
}
/*-------------------------OUTPUT----------------------------------------------
Time of execution: Fri Sep 12 10:44:54 2014

Enter a sentence: Today Is Thr Sep 14, 2014
Number of uppercase letters.......4
Number of digits..................6
Number of vowels..................4
Press any key to continue . . .
-----------------------------------------------------------------------------*/
