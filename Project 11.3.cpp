//================================================================================
// File: Project 11.3.cpp
//================================================================================
// Programmer: Alexander Chiu                                     
// Date: Dec. 4, 2014                                 
// Course: CPSC-121
// Time: Tuesday 3:30
// Instructor: Dr. Ray Ahmadnia                                                    
// Project: Project No. 11  Part No. 3
// 
// Description:
// This program will generate two objects and add, substract, and multiply the
// objects through overloaded operators.
//=================================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
class POINT
{
private: float x, y; // coordinates of the point
		 char name; // name of the object
		 int k; // constant
public: void SetName(char alias);
		void ReadPoint();
		void ReadConstant();
		void Display();
		void Display(char constant);
		friend float Distance(POINT A, POINT B);
		POINT operator+(const POINT& b);
		POINT operator-(const POINT& b);
		POINT operator*(const POINT& b);
		~POINT(){}
};
//== main =========================================================================
//=================================================================================
int main()
{
	// Display time and date of program execution.
	time_t c;
	time(&c);
	cout << "Time of execution: " << ctime(&c) << endl;

	// Declare objects and variables
	POINT A, B, C;
	float distance;

	// Set the names for the objects
	A.SetName('A');
	B.SetName('B');
	C.SetName('C');

	// Ask for coordinates
	A.ReadPoint(); 
	B.ReadPoint();

	// Use the overloaded operators to calculate the coordinates for the third object
	C = A + B;
	A.Display(); cout << "+ "; B.Display(); cout << "= "; C.Display(); cout << endl;
	C = A - B;
	A.Display(); cout << "- "; B.Display(); cout << "= "; C.Display(); cout << endl;
	
	A.ReadConstant();
	C = A*A;
	A.Display('k'); cout << " * "; A.Display(); cout << "= "; C.Display(); cout << endl;

	// Calculate the distance between two points and display the result
	distance = Distance(A, B);
	cout << "The distance from "; A.Display();
	cout << " to "; B.Display();
	cout << fixed << setprecision(2);
	cout << " is " << distance << endl;
	
	system("PAUSE");
	return 0;
}
//=== SetName =====================================================================
// This function will set the name of the object
// Input: alias -- character name of object
// Output: Sets the name of the object
//=================================================================================
void POINT::SetName(char alias)
{
	this->name = alias;
}
//=== ReadPoint ===================================================================
// This function will read in user coordinates
// Output:  Set the coordinates of the object
//=================================================================================
void POINT::ReadPoint()
{
	cout << "Enter the coordinates of point " << name << ": ";
	cin >> x >> y;
}
//=== ReadConstant ================================================================
// This function will display a one-dimensional array
// Output: Set the object constant
//=================================================================================
void POINT::ReadConstant()
{
	cout << "Enter a constant: ";
	cin >> k;
}
//=== Display =====================================================================
// This function will display the point or the constant
// Input:
//		1) no input
//		2) constant -- char to call for the constant
// Output:
//		Display either the point or constant of object
//=================================================================================
void POINT::Display()
{
	cout << name << "(" << x << "," << y << ") ";
}
void POINT::Display(char constant)
{
	cout << k;
}
//=== Distance ====================================================================
// This function will calculate the distance between two objects
// Input: POINT A, POINT B -- points you are trying to find the distance
// Output: Distance from POINT A to POINT B
//=================================================================================
float Distance(POINT A, POINT B)
{
	float distance;
	distance = sqrt(pow(A.x - B.x,2) + pow(A.y - B.y,2));
	return distance;
}
//=== operator+ ===================================================================
// Overloaded + operator
// Will add the x components and y components of an object
//=================================================================================
POINT POINT::operator+(const POINT& b)
{
	POINT Sum;
	Sum.x = this->x + b.x;
	Sum.y = this->y + b.y;
	return Sum;
}
//=== operator- ===================================================================
// Overloaded - operator
// Will subtract the x components and y components of an object
//=================================================================================
POINT POINT::operator-(const POINT& b)
{
	POINT Difference;
	Difference.x = this->x - b.x;
	Difference.y = this->y - b.y;
	return Difference;
}
//=== operator* ===================================================================
// Overloaded * operator
// Will multiply the constant with the x and y components of an object
//=================================================================================
POINT POINT::operator*(const POINT& b)
{
	POINT Product;
	Product.x = this->k * b.x;
	Product.y = this->k * b.y;
	return Product;
}
/*-------------------------OUTPUT-----------------------------------------------------
Time of execution: Sun Nov 30 14:45:04 2014

Enter the coordinates of point A: 3 4
Enter the coordinates of point B: 5 7
A(3,4) + B(5,7) = C(8,11)
A(3,4) - B(5,7) = C(-2,-3)
Enter a constant: 4
4 * A(3,4) = C(12,16)
The distance from A(3,4)  to B(5,7)  is 3.61
Press any key to continue . . .
------------------------------------------------------------------------------------*/
