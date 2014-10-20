//================================================================================
// File: Project 7.4.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Oct. 23, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 7  Part No. 4
// 
// Description:
// This program will calculate the summation of three squared up to three to the 
// power of n.
//=================================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;
// Declare function prototypes
double RecursiveThree(int n);
//== main =========================================================================
//
//=================================================================================
int main()
{
	// Display time and date of program execution.
	time_t p;
	time(&p);
	cout << "Time of execution: " << ctime(&p) << endl;
	
	// Call the recursive function
	cout << "The sum with n = 3 is " << RecursiveThree(3) << endl;
	cout << "The sum with n = 10 is " << RecursiveThree(10) << endl;
	cout << "The sum with n = 20 is " << RecursiveThree(20) << endl;

	system("PAUSE");
	return 0;
}
//=== RecursiveThree ==============================================================
// This function will calculate the nth sum of three to the nth power.
// Input:
//		n -- integer index of the number you want to be calculated
// Output:
//		sum of n terms for three to the nth power
//=================================================================================
double RecursiveThree(int n)
{
	if (n == 2)
		return 9;
	else
		return pow(3, n) + RecursiveThree(n - 1);
}
/*-------------------------OUTPUT----------------------------------------------
Time of execution : Sat Oct 18 09 : 53 : 23 2014

The sum with n = 3 is 36
The sum with n = 10 is 88569
The sum with n = 20 is 5.23018e+009
Press any key to continue . . .
-----------------------------------------------------------------------------*/
