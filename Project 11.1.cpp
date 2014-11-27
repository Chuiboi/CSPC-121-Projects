//================================================================================
// File: Project 11.1.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Dec. 4, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 11  Part No. 1
// 
// Description:
// This program will ask the user for the vertices. It will then draw a rectangle
// and calculate the perimeter.
//=================================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <string>
#include <random>
#include <algorithm>
using namespace std;
// Declare class structure
template <class T, int n>
class TWO
{
private: T a[n];
public: void ReadData();
		void DisplayData();
		void SortArray();
		~TWO(){};
};
//=== ReadData ====================================================================
// This function will populate the one-dimensional array
//=================================================================================
void TWO<int,10>::ReadData()
{
	srand(time(0));
	for (int i = 0; i < 10; i++)
		a[i] = rand() % 20;
}
void TWO<string, 12>::ReadData()
{
	a[0] = "Jan";
	a[1] = "Feb";
	a[2] = "Mar";
	a[3] = "Apr";
	a[4] = "May";
	a[5] = "Jun";
	a[6] = "Jul";
	a[7] = "Aug";
	a[8] = "Sep";
	a[9] = "Oct";
	a[10] = "Nov";
	a[11] = "Dec";
}

//=== DisplayData =================================================================
// This function will display the one-dimensional array
//=================================================================================
template <class T, int n>
void TWO<T, n>::DisplayData()
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
//=== SortArray ===================================================================
// This function will sort the one-dimensional array
//=================================================================================
template <class T, int n>
void TWO<T, n>::SortArray()
{
	sort(a, a + n);
}

//== main =========================================================================
//=================================================================================
int main()
{
	// Display time and date of program execution.
	time_t c;
	time(&c);
	cout << "Time of execution: " << ctime(&c) << endl;

	// Declare objects
	TWO<int, 10> P;
	TWO<string, 12> Q;

	// Populate the object arrays
	P.ReadData();
	Q.ReadData();

	// Display unsorted arrays
	cout << "Object P unsorted: ";
	P.DisplayData();
	cout << "Object Q unsorted: ";
	Q.DisplayData();

	// Display sorted arrays
	cout << "Object P sorted: ";
	P.SortArray(); P.DisplayData();
	cout << "Object Q sorted: ";
	Q.SortArray(); Q.DisplayData();

	system("PAUSE");
	return 0;
}
/*-------------------------OUTPUT-----------------------------------------------------
Time of execution : Thu Nov 27 11 : 50 : 30 2014

Object P unsorted : 13 9 2 16 13 6 7 18 1 6
Object Q unsorted : Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec
Object P sorted : 1 2 6 6 7 9 13 13 16 18
Object Q sorted : Apr Aug Dec Feb Jan Jul Jun Mar May Nov Oct Sep
Press any key to continue . . .
------------------------------------------------------------------------------------*/
