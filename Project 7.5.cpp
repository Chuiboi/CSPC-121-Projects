//================================================================================
// File: Project 7.5.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Oct. 24, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 7  Part No. 5
// 
// Description:
// This program will calculate the 43rd Fibonacci number using both the recursive
// and non-recursive method.
//=================================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;
// Declare function prototypes
double RecursiveFibonacci(int n);
double NonRecursiveFibonacci(int n);
//== main =========================================================================
//
//=================================================================================
int main()
{
	// Display time and date of program execution.
	time_t p;
	time(&p);
	cout << "Time of execution: " << ctime(&p) << endl;

	// Call the the functions to calculate the 43rd Fibonacci number
	cout << "The 43rd Fibonacci number using the recursive method is " << RecursiveFibonacci(43) 
		<< endl;
	cout << "The 43rd Fibonacci number using the non-recursive method is "
		<< NonRecursiveFibonacci(43) << endl;

	system("PAUSE");
	return 0;
}
//=== RecursiveFibonacci ==========================================================
// This function will calculate the nth Fibonacci number through a recursive method
// Input:
//		n -- integer index of the number you want to be calculated
// Output:
//		nth Fibonacci number
//=================================================================================
double RecursiveFibonacci(int n)
{
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return RecursiveFibonacci(n - 2) + RecursiveFibonacci(n - 1);
}
//=== NonRecursiveFibonacci =======================================================
// This function will calculate the nth Fibonacci number through a nonrecursive 
// method
// Input:
//		n -- integer index of the number you want to be calculated
// Output:
//		nth Fibonacci number
//=================================================================================
double NonRecursiveFibonacci(int n)
{
	double num1 = 0, num2 = 1, num3;
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
	{
		for (int i = 3; i <= n; i++)
		{
				num3 = num1 + num2;
				num1 = num2;
				num2 = num3;
		}
	}
	return num3;
}
/*-------------------------OUTPUT----------------------------------------------
Time of execution: Sat Oct 18 11:19:36 2014

The 43rd Fibonacci number using the recursive method is 2.67914e+008
The 43rd Fibonacci number using the non-recursive method is 2.67914e+008
Press any key to continue . . .
-----------------------------------------------------------------------------*/
