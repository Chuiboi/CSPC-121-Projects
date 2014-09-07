//---------------------------------------------------------------------------------//
//                        Name: Alexnader Chiu                                     //
//                        Project No. 1  Part No. 4                                //
//                        Due Date: Sept. 4, 2014                                  //
//                        Course: CPSC-121                                         //
//                        Instructor: Dr. Ray Ahmadnia                             //
//	This program will produce an image of a triangle and its measurements.         //
//	It will then calculate the area and perimeter of the triangle.                 //
//---------------------------------------------------------------------------------//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	float a, b, c, p, area, perimeter;

	// Ask user to provide side measurements of triangle //
	cout << "Enter the measurements of all three sides of a triangle: ";
	cin >> a >> b >> c;

	// Display the triangle with the measuremments //
	cout << "               /\\\n";
	cout << fixed << setprecision(2) << "     a=" << a << "  /  \\   b=" << b << endl;
	cout << "             /    \\\n";
	cout << "            /      \\\n";
	cout << "            --------\n";
	cout << fixed << setprecision(2) << "            c=" << c << endl;
	cout << endl;

	// Calculate the area and perimeter of the triangle and display the results //

	p = (a + b + c)/2;
	area = sqrt(p * (p-a) * (p-b) * (p-c));
	perimeter = a + b + c;

	cout << fixed << setprecision(2) << "Area = " << area << endl;
	cout << fixed << setprecision(2) << "Perimeter = " << perimeter << endl;

	system("PAUSE");
	return 0;
}
/*-----------------------------------OUTPUT--------------------------------------------
Enter the measurements of all three sides of a triangle: 33.185 21.234 13.80
               /\
     a=33.19  /  \   b=21.23
             /    \
            /      \
            --------
            c=13.80

Area = 90.81
Perimeter = 68.22
Press any key to continue . . .
--------------------------------------------------------------------------------------*/