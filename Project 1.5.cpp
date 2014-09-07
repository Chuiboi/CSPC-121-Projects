//---------------------------------------------------------------------------------//
//                        Name: Alexnader Chiu                                     //
//                        Project No. 1  Part No. 5                                //
//                        Due Date: Sept. 4, 2014                                  //
//                        Course: CPSC-121                                         //
//                        Instructor: Dr. Ray Ahmadnia                             //
//	This will calculate three expressions with user provided numbers.              //
//---------------------------------------------------------------------------------//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void powerEx(float aPower, float bPower)
{
	// Calculates the power expression with given numbers //
	float powerResult = 0;
	powerResult = pow((aPower + bPower), aPower); 
	
	// Display the results //
	cout << fixed << setprecision(2) << 
		"( a + b )^a = " << powerResult << endl;
}

void rootEx(float aRoot, float bRoot)
{
	// Calculates the root expression with given numbers //
	float rootResult = 0;
	float aPow = 0, bPow = 0, totalPow;

	aPow = pow(aRoot,2);
	bPow = pow(bRoot,5);
	totalPow = aPow + bPow;
	rootResult = pow(totalPow, float(0.25));

	// Display the results //
	cout << fixed << setprecision(2) << 
		"The 4th root of (a^2 + b^5) = " << rootResult << endl;
}

void logEx(float aLog, float bLog)
{
	// Calculates the log expression with given numbers //
	float logResult = 0;
	logResult = log(aLog + bLog) + log10(2 * aLog * bLog);
	
	// Display the results //
	cout << fixed << setprecision(2) << 
		"Ln( a + b ) + Log ( 2ab ) = " << logResult << endl;
}

int main()
{
	float a, b;

	// Ask user for the two numbers //
	cout << "Enter the value of a and b: ";
	cin >> a >> b;
	cout << endl;

	// Calculate the expression and display the results //
	powerEx(a,b);
	rootEx(a,b);
	logEx(a,b);

	system("PAUSE");
	return 0;
}
/*------------------------------OUTPUT-----------------------------------------------
Enter the value of a and b: 2.3 4.7

( a + b )^a = 87.85
The 4th root of (a^2 + b^5) = 6.92
Ln( a + b ) + Log ( 2ab ) = 3.28
Press any key to continue . . .
-----------------------------------------------------------------------------------*/