//================================================================================
// File: Project 9.6.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Nov. 6, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 9  Part No. 6
// 
// Description:
// This program will ask the user for the data. The class structure will use its
// members to read in the data into array, display the array, and find the max,
// min, and total of the array.
//=================================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <string>
#include <iomanip>
using namespace std;
// Declare class structure
class SIX
{
private: struct PERSON
	{
		string name;
		int age;
	};
	PERSON p[4];
public:
	void ReadData() // Read data into array p
	{
		for (int i = 0; i < 4; i++)
		{
			cout << "Enter a name and age: ";
			cin >> p[i].name >> p[i].age;
		}
	}
	void Display() // Display array p
	{
		cout << endl;
		// Generate Header
		cout << left << setw(15) << "Name";
		cout << left << setw(5) << "Age";
		cout << endl;
		for (int j = 1; j <= 20; j++)
			cout << char(196);
		cout << endl;
		// Display data in table
		for (int i = 0; i < 4; i++)
		{
			cout << left << setw(15) << p[i].name;
			cout << left << setw(5) << p[i].age;
			cout << endl;
		}
		cout << endl;
	}
	int AgeAve() // Find their average age
	{
		int total = 0;
		for (int i = 0; i < 4; i++)
			total += p[i].age;
		return total / 4;
	}
	void DisplayAboveAve(int AgeAverage) // Display the name of those whose age is above average
	{
		cout << "The following people's age is above the average: ";
		for (int i = 0; i < 4; i++)
		{
			if (p[i].age > AgeAverage) cout << p[i].name << " ";
		}
		cout << endl;
	}
	~SIX(){ system("PAUSE"); }
};
//== main =========================================================================
//=================================================================================
int main()
{
	// Display time and date of program execution.
	time_t c;
	time(&c);
	cout << "Time of execution: " << ctime(&c) << endl;

	// Declare class
	SIX a;

	// Call functions
	a.ReadData();
	a.Display();
	a.DisplayAboveAve(a.AgeAve());

	return 0;
}
/*-------------------------OUTPUT-----------------------------------------------------
Time of execution: Mon Nov 03 09:15:38 2014
Enter a name and age: John 22
Enter a name and age: Mary 19
Enter a name and age: Cynthia 33
Enter a name and age: George 25
Name           Age
────────────────────
John           22
Mary           19
Cynthia        33
George         25
The following people's age is above the average: Cynthia George
Press any key to continue . . .
------------------------------------------------------------------------------------*/
