//================================================================================
// File: Project 5.3.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Oct. 2, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 5  Part No. 3 
// 
// Description:
//	This program will use different functions to read in data and calculate the
// sum, average, and find the minimum and maximum. It will then display the
// results.
//=================================================================================

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <ctime>
#include <algorithm>
#include <fstream>
#include <cctype>

using namespace std;

// Function prototypes
int ReadData(int &a, int &b, int &c);
int ComputeSum(int &a, int &b, int &c);
float ComputeAverage(int &a, int &b, int &c, float &avg);
int FindMaxMin(int &a, int &b, int &c, int &max, int &min);
void Display(int &sum, float &avg);
void Display(int &a, int &b, int &c, int &max, int &min);

//== main =========================================================================
//
//=================================================================================

int main()
{
	// Display time and date of program execution.
	time_t p;
	time(&p);
	cout << "Time of execution: " << ctime(&p) << endl;

	// Read data into x, y, z
	int x, y, z;
	ReadData(x,y,z);

	// Compute the total of x, y, z
	int total; 
	total = ComputeSum(x, y, z);

	// Compute the average of x, y, z
	float average; 
	ComputeAverage(x, y, z, average);
	
	// Display total and average of x, y, z
	Display(total, average);

	// Find the maximum and minimum of x, y, z
	int max, min;
	FindMaxMin(x, y, z, max, min);

	// Diplay the max and min values
	Display(x, y, z, max, min);

	// Terminate the program
	system("PAUSE");
	return 0;
}
//=== ReadData ====================================================================
//
// This function will read in three integers and pass the values to their variables
//
// Input:
//		&a, &b, &c	-- Reference variables for the values to be stored in 
//		
// Output:
//		The values are stored in the reference variables.
//
//=================================================================================
int ReadData(int &a, int &b, int &c)
{
	cout << "Enter three integer numbers: ";
	cin >> a >> b >> c;
	return a, b, c;
}
//=== ComputeSum ==================================================================
//
// This function will calculate the sum of the reference variables
//
// Input:
//		&a, &b, &c	-- Reference variables for the values to be summed
//
// Output:
//		The sum of the provided reference variables.
//
//=================================================================================
int ComputeSum(int &a, int &b, int &c)
{
	return a + b + c;
}
//=== ComputeAverage ==============================================================
//
// This function will calculate the average of the provided reference variables 
//
// Input:
//		&a, &b, &c	-- Reference variables for the values to be avereaged
//		&avg -- Reference variable for the average to be stored in
// Output:
//		Average of the provided reference variables.
//
//=================================================================================
float ComputeAverage(int &a, int &b, int &c, float &avg)
{
	avg = float(a+b+c)/3;
	return avg;
}
//=== Display =====================================================================
//
// This function will print out the total and average or the minimum and maximum
//
// Input:
//		&total, &avg -- Reference variables to display the total and average		
//		&a, &b, &c, &max, &min -- Reference variables to display the max and min
// Output:
//		Prints out strings to display the total and average or the min and max.
//
//=================================================================================
void Display(int &total, float &avg)
{
	cout << "Total = " << total << endl;
	cout << "Average = " << avg << endl;
}

void Display(int &a, int &b, int &c, int &max, int &min)
{
	cout << "The max and min values of ";
	cout << a << ", " << b << ", and " << c;
	cout << " are " << max << " and " << min << endl;
}
//=== FindMaxMin ==================================================================
//
// This function will calculate the maximum and minimum of the data.
//
// Input:
//		&a, &b, &c -- Reference variables to the user provided integers
//		&maximum, &minimum -- Reference variables to store the max and min
// Output:
//		Maximum and minimum of the data.
//
//=================================================================================
int FindMaxMin(int &a, int &b, int &c, int &maximum, int &minimum)
{
	int ary[3] = {a, b, c};
	maximum = ary[0], minimum = ary[0];
	
	for(int i = 0; i < 3; i++)
	{
		if(ary[i] > maximum)
			maximum = ary[i];
		if(ary[i] < minimum)
			minimum = ary[i];
	}
	
	return maximum, minimum;
}
/*-------------------------OUTPUT----------------------------------------------
Time of execution: Sun Sep 28 12:10:16 2014

Enter three integer numbers: 5 3 8
Total = 16
Average = 5.33333
The max and min values of 5, 3, and 8 are 8 and 3
Press any key to continue . . .
-----------------------------------------------------------------------------*/
