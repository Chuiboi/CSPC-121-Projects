//================================================================================
// File: Project 7.5.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Oct. 23, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 7  Part No. 5
// 
// Description:
// This program will calculate the runtime to calculate the 43rd Fibonacci number 
// using both the recursive and non-recursive method.
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

	// Declare runtime points
	int begin, end;

	// Call the the functions to calculate the 43rd Fibonacci number using
	// recursive method
	begin = clock();
	cout << "The 43rd Fibonacci number using the recursive method is " 
		<< RecursiveFibonacci(43) << endl;
	end = clock();
	cout << "Runtime with recursive method: ";
	cout << (end - begin) / CLK_TCK << " seconds" << endl;

	// Call the the functions to calculate the 43rd Fibonacci number using
	// nonrecursive method
	begin = clock();
	cout << "The 43rd Fibonacci number using the non-recursive method is "
		<< NonRecursiveFibonacci(43) << endl;
	end = clock();
	cout << "Runtime with nonrecursive method: "; 
	cout << (end - begin) / CLK_TCK << " seconds" << endl;

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
		return 1;
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
	double num1 = 1, num2 = 1, num3;
	if (n == 1)
		return 1;
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
Time of execution: Tue Oct 21 16:21:12 2014

The 43rd Fibonacci number using the recursive method is 4.33494e+008
Runtime with recursive method: 21 seconds
The 43rd Fibonacci number using the non-recursive method is 4.33494e+008
Runtime with nonrecursive method: 0 seconds
Press any key to continue . . .
-----------------------------------------------------------------------------*/
