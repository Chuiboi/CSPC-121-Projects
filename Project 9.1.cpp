//================================================================================
// File: Project 9.5.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Nov. 6, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 9  Part No. 5
// 
// Description:
// This program will ask the user for the data. The class structure will use its
// members to read in the data into array, display the array, and find the max,
// min, and total of the array.
//=================================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
using namespace std;
// Declare class structure
class FIVE
{
private: int x[7];
public:
	void Read() // read data in array x
	{
		cout << "Enter 7 integer data: ";
		for (int i = 0; i < 7; i++)
			cin >> x[i];
	}
	void Display() // display array x
	{
		for (int i = 0; i < 7; i++)
			cout << x[i] << " ";
		cout << endl;
	}
	void FindMaxMin(int& mx, int& mn) // return the max and min data in array x
	{
		mx = mn = x[0];
		for (int i = 0; i < 7; i++)
		{
			if (x[i] > mx)
				mx = x[i];
			if (x[i] < mn)
				mn = x[i];
		}
	}
	int FindTotal() // return the sum of data in array x
	{
		int total = 0;
		for (int i = 0; i < 7; i++)
			total += x[i];
		return total;
	}
	~FIVE(){ system("PAUSE"); }
};
//== main =========================================================================
//=================================================================================
int main()
{
	// Display time and date of program execution.
	time_t c;
	time(&c);
	cout << "Time of execution: " << ctime(&c) << endl;

	// Ask user for data and display it
	FIVE a;
	a.Read();
	cout << "All data: ";
	a.Display();

	// Find the max, min, and total of array
	int max, min;
	a.FindMaxMin(max, min);

	cout << "Maximum = " << max << " Minimum = " << min << " Total = " << a.FindTotal();
	cout << endl;

	return 0;
}
/*-------------------------OUTPUT-----------------------------------------------------
Time of execution: Sat Nov 01 10:47:46 2014
Enter 7 integer data: 22 77 33 99 11 10 23
All data: 22 77 33 99 11 10 23
Maximum = 99 Minimum = 10 Total = 275
Press any key to continue . . .
------------------------------------------------------------------------------------*/
