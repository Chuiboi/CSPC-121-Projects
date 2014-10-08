//================================================================================
// File: Project 5.1.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Oct. 2, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 5  Part No. 1 
// 
// Description:
//	This program will ask the user to enter a sentence. The program will then
// count the number of lower case, upper case, vowels, and words.
//=================================================================================

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <algorithm>
#include <cctype>

using namespace std;
void caseCounter(string text);
void vowelCounter(string text);
void wordCounter(string text);

//== main =========================================================================
//
//=================================================================================

void main()
{
	// Display time and date of program execution.
	time_t p;
	time(&p);
	cout << "Time of execution: " << ctime(&p) << endl;

	// Delcare variables
	string sentence = " ";
	
	// Ask user for the sentence
	cout << "I can count the number of upper case, lower case, vowels, and words.\n";
	cout << "Please enter a sentence: ";
	getline(cin, sentence);

	caseCounter(sentence);
	vowelCounter(sentence);
	wordCounter(sentence);

	system("PAUSE");
}

//=== caseCounter =================================================================
//
// This function counts the number of lower case and upper case letters.
//
// Input:
//		text	-- string that you want the letters to be counted
//
// Output:
//		The number of lower case and upper case letters are printed.
//
//=================================================================================
void caseCounter(string text)
{
	int upperCount = 0, lowerCount = 0;
	for(int i = 0; i < text.length(); i++)
	{
		char c = text[i];
		if(isupper(c))
			upperCount++;
		if(islower(c))
			lowerCount++;
	}
	cout << "Number of upper case letters: " << upperCount << endl;
	cout << "Number of lower case letters: " << lowerCount << endl;
}

//=== wordCounter =================================================================
//
// This function counts the number of words.
//
// Input:
//		text	-- string that you want the words to be counted
//
// Output:
//		The number of words is printed.
//
//=================================================================================
void wordCounter(string text)
{
	int wordCount = 0;
	for(int i = 0; i < text.length() ; i++)
	{
		if(text[i] == ' ' || text[i] == '\t' || text[i] == '\n')
			wordCount++;
	}
	cout << "Number of words: " << wordCount + 1 << endl;
}

//=== vowelCounter ===============================================================
//
// This function counts the number vowels.
//
// Input:
//		text	-- string that you want the letters to be counted
//
// Output:
//		The number of vowels is printed.
//
//=================================================================================
void vowelCounter(string text)
{
	int vowelCount = 0;
	for(int i = 0; i < text.length(); i++)
	{
		char c = toupper(text[i]);
		if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			vowelCount++;
	}
	cout << "Number of vowels: " << vowelCount << endl;
}
/*-------------------------OUTPUT----------------------------------------------
Time of execution: Fri Sep 26 12:54:28 2014

I can count the number of upper case, lower case, vowels, and words.
Please enter a sentence: Exam No.1 Two Weeks From Now
Number of upper case letters: 6
Number of lower case letters: 15
Number of vowels: 8
Number of words: 6
Press any key to continue . . .
-----------------------------------------------------------------------------*/
