//================================================================================
// File: Project 4.1.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Sept. 25, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 4  Part No. 1 
// 
// Description:
//	This program will display an array, the maximum, minimum, average, and sorted
// array.
//=================================================================================

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <ctime>
#include <algorithm>

using namespace std;

//== main =========================================================================
//
//=================================================================================

void main()
{
	// Display time and date of program execution.
	time_t p;
	time(&p);
	cout << "Time of execution: " << ctime(&p) << endl;

	// Declare array
	int a[6] = {3, 9, 7, 8, 1, 4};

	// Display the array
	cout << "This is the original array a: ";
	
	for(int i = 0; i < 6; i++)
		cout << a[i] << " ";
	
	cout << endl;

	// Calculate the maximum, minimum, and average
	int max = a[0], min = a[0], total = 0;

	for(int j = 0; j < 6; j++)
	{
		if(a[j] < min)
			min = a[j];

		if(a[j] > max)
			max = a[j];

		total += a[j];
	}

	cout << "Maximum = " << max << "  Minimum = " << min << "  Average = " << total / 6.;
	cout << endl;

	// Display sorted array
	sort(a,a+6);

	cout << "This is the sorted form of array a: ";
	
	for(int i = 0; i < 6; i++)
		cout << a[i] << " ";
	
	cout << endl;
		
	system("PAUSE");
}
/*-------------------------OUTPUT----------------------------------------------
Time of execution: Fri Sep 19 09:14:16 2014

This is the original array a: 3 9 7 8 1 4
Maximum = 9  Minimum = 1  Average = 5.33333
This is the sorted form of array a: 1 3 4 7 8 9
Press any key to continue . . .
-----------------------------------------------------------------------------*/
