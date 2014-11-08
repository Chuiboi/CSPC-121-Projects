//================================================================================
// File: Project 10.1.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Nov. 13, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 10  Part No. 1
// 
// Description:
// This program will ask the user for the vertices. It will then draw a rectangle
// and calculate the perimeter.
//=================================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;
// Declare class structure
class POINT
{
private: float x, y;
public: 
	POINT(); // constructor to set x,y of each vertex to ZERO
	void ReadData(char vertex); // member to read x and y coordinate of each vertex
	void Display(char vertex); // display (x,y) of a given vertex
	friend float Distance(POINT p, POINT q); // compute the distance 
	friend void DisplayPer(float AB, float AC, float CD, float BD); // display perimeter
	~POINT(); // destructor
};
POINT::POINT(){ x = 0; y = 0; } // constructor to set x,y of each vertex to ZERO
void POINT::ReadData(char vertex) // member to read x and y coordinate of each vertex
{
	cout << "\tEnter the x and y coordinates of vertex " << vertex << ": ";
	cin >> x >> y;
}
void POINT::Display(char vertex) // display (x,y) of a given vertex
{
	cout << fixed << setprecision(2);
	cout << vertex << "(" << x << "," << y << ")";
}
float Distance(POINT p, POINT q) // compute the distance
{
	return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}
void DisplayPer(float AB, float AC, float CD, float BD) // display perimeter
{
	float perimeter = AB + AC + CD + BD;
	cout << "Perimeter = " << perimeter << endl;
}
POINT::~POINT(){} // destructor
//== main =========================================================================
//=================================================================================
int main()
{
	// Display time and date of program execution.
	time_t c;
	time(&c);
	cout << "Time of execution: " << ctime(&c) << endl;

	POINT A, B, C, D;
	cout << "For the rectangle ABCD:\n";
	A.ReadData('A');
	B.ReadData('B');
	C.ReadData('C');
	D.ReadData('D');
	cout << endl;

	// Draw a rectangle and display vertices
	cout << fixed << setprecision(2);
	A.Display('A'); cout << "----------------------------"; B.Display('B'); cout << endl;
	cout << "          |                              |" << endl;
	cout << "          |                              |" << endl;
	cout << "          |                              |" << endl;
	C.Display('C'); cout << "----------------------------"; D.Display('D'); cout << endl;
	cout << endl;

	// Compute the length of each side
	float AB = Distance(A, B); cout << "\tAB = " << AB << endl;
	float AC = Distance(A, C); cout << "\tAC = " << AC << endl;
	float CD = Distance(C, D); cout << "\tCD = " << CD << endl;
	float BD = Distance(B, D); cout << "\tBD = " << BD << endl;

	// Compute and display the perimeter
	DisplayPer(AB, AC, CD, BD);

	system("PAUSE");
	return 0;
}
/*-------------------------OUTPUT-----------------------------------------------------
Time of execution: Sat Nov 08 11:06:40 2014

For the rectangle ABCD:
Enter the x and y coordinates of vertex A: 10 7
Enter the x and y coordinates of vertex B: 20 7
Enter the x and y coordinates of vertex C: 10 2
Enter the x and y coordinates of vertex D: 20 2

A(10.00,7.00)----------------------------B(20.00,7.00)
          |                              |
          |                              |
          |                              |
C(10.00,2.00)----------------------------D(20.00,2.00)

AB = 10.00
AC = 5.00
CD = 10.00
BD = 5.00
Perimeter = 30.00
Press any key to continue . . .
------------------------------------------------------------------------------------*/
