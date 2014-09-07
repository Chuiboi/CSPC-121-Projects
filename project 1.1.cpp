//--------------------------------------------------------------------------------//
//                        Name: Alexnader Chiu                                    //
//                        Project No. 1  Part No. 1                               //
//                        Due Date: Sept. 4, 2014                                 //
//                        Course: CPSC-121                                        //
//                        Instructor: Dr. Ray Ahmadnia                            //
//	This program is used to calculate a balance based on the initial deposit,     //
//	the annual interest rate, and the duration of the accout.                     //
//--------------------------------------------------------------------------------//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	float deposit, balance, interestRate;
	int years;

	// User enters their initial deposit here//
	cout << "Enter the money you want to deposit now(P): "; 
	cin >> deposit;                                         

	// User enters their interest rate //
	cout << "Enter the interest rate: ";                    
	cin >> interestRate;                                    

	// User enter number of years //
	cout << "Enter duration in years(t): ";                 
	cin >> years;                                           

	// Calculate the balance after a set time //
	balance = deposit * exp(interestRate * years);          

	// Displays the new balance after being calculated //
	cout << "\tYour balance after " <<						
		years << " years is " << balance << endl; 


	system("PAUSE");
	return 0;
}
/*-------------------------OUTPUT--------------------------------------------
Enter the money you want to deposit now(P): 20000
Enter the interest rate: .05
Enter duration in years(t): 5
        Your balance after 5 years is 25680.5
Press any key to continue . . .
----------------------------------------------------------------------------*/