//================================================================================
// File: Project 10.2.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Nov. 13, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 10  Part No. 2
// 
// Description:
// This program will ask the user for five ages. The program will then find the
// max, min, and average ages.
//=================================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
using namespace std;
// Declare class structure
class TWO
{
private: int age[5];
public:
	void ReadData(); 
	friend int FindAverage(TWO p); 
	void FindMinMax(int& maxAge, int& minAge); 
	void AboveAve(int ageAve); 
	void DisplayMaxMinAge(int maxAge, int minAge);
	~TWO(); 
};
void TWO::ReadData() // Read data into age array
{
	cout << "Enter 5 ages: ";
	for (int i = 0; i < 5; i++)
		cin >> age[i];
}
int FindAverage(TWO p) // Friend to return the average of data in array age of object p
{
	int total = 0;
	for (int i = 0; i < 5; i++)
		total += p.age[i];
	return total / 5;
}
void TWO::FindMinMax(int& maxAge, int& minAge) // Find and return the max and min age
{
	maxAge = minAge = age[0];
	for (int i = 1; i < 5; i++)
	{
		if (age[i] > maxAge) maxAge = age[i];
		if (age[i] < minAge) minAge = age[i];
	}
}
void TWO::AboveAve(int ageAve) // Display ages above the average
{
	cout << "Ages above average: ";
	for (int i = 0; i < 5; i++)
	{
		if (age[i] > ageAve) cout << age[i] << " ";
	}
	cout << endl;
}
void TWO::DisplayMaxMinAge(int maxAge, int minAge) // Display max and min age
{
	cout << "Maximum age is " << maxAge << endl;
	cout << "Minimum age is " << minAge << endl;
}
TWO::~TWO(){} // Destructor
//== main =========================================================================
//=================================================================================
int main()
{
	// Display time and date of program execution.
	time_t c;
	time(&c);
	cout << "Time of execution: " << ctime(&c) << endl;

	// Declare object
	TWO a;
	int average, max, min;

	// Calling statements
	a.ReadData();
	average = FindAverage(a);
	a.FindMinMax(max, min);
	a.AboveAve(average);
	a.DisplayMaxMinAge(max, min);
	
	system("PAUSE");
	return 0;
}
/*-------------------------OUTPUT-----------------------------------------------------
Time of execution: Sun Nov 09 11:46:50 2014

Enter 5 ages: 22 27 19 17 25
Ages above average: 27 25
Maximum age is 27
Minimum age is 17
Press any key to continue . . .
------------------------------------------------------------------------------------*/
