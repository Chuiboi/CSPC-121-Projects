//--------------------------------------------------------------------------------//
//                        Name: Alexnader Chiu                                    //
//                        Project No. 1  Part No. 2                               //
//                        Due Date: Sept. 4, 2014                                 //
//                        Course: CPSC-121                                        //
//                        Instructor: Dr. Ray Ahmadnia                            //
//	This program asks the user to provide his name, gender, and friend's name.    //
//	It will then show that the both the provided names are friends.               //
//--------------------------------------------------------------------------------//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;


string askGender(string myName) 
	// Asks the user for their gender and appends appropriate title. //
	// If user enters anything else instead of 'm' of 'f', then the //
	// user name will not have a title. //
{
	char gender;
	string properName = " ";
	string friendFullName;

	cout << myName;
	cout << ", please enter your gender (m/f): ";
	cin >> gender;

	switch(gender)
	{
	case 'm': case 'M': properName = "Mr. " + myName;
		break;
	case 'f': case 'F': properName = "Ms./Mrs. " + myName;
		break;
	default: cout << "User provided gender is invalid. Closing program...\n"; 
			 system("PAUSE"); 
			 exit(1);
	}
	
	return properName;
}

string askFriendName(string myProperName) 
	// Uses the user's name to ask for the friend's name. //
	// Appends "Mr/Mrs" to the user provided friend name. //
{
	string friendFullName;

	cout << myProperName;
	cout << ", please enter your friend's name: ";
	cin.ignore();
	getline(cin,friendFullName);

	friendFullName = "Mr/Mrs " + friendFullName;

	return friendFullName;
}

int main()
{
	string fullName = " ";
	string friendProperName;

	// Asks for the users entire name
	cout << "Enter your full name: ";
	getline(cin,fullName); 

	friendProperName = askFriendName(askGender(fullName));

	// Displays the friend acceptance.
	cout << "Hello ";
	cout << friendProperName;
	cout << ", " << fullName << " considered you as a friend!!\n";

	system("PAUSE");
	return 0;
}
/*-------------------------OUTPUT--------------------------------------------
Enter your full name: Barack H Obama
Barack H Obama, please enter your gender (m/f): m
Mr. Barack H Obama, please enter your friend's name: Bill Clinton
Hello Mr/Mrs Bill Clinton, Barack H Obama considered you as a friend!!
Press any key to continue . . .
----------------------------------------------------------------------------*/