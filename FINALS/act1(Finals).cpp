// Activity 1: Create a program that will ask for first name, middle name, and last name then concatenate it to form a full name. Display the length of the full name then clear the value of middle name. Display again the value of full name.
#include <iostream>
#include <string.h>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C
int main()
{
    string firstName, middleName, lastName;

    //Ask user to input their Name
    cout << "Enter your First Name: ";
    getline(cin, firstName);

    cout << "Enter your Middle Name: ";
    cin >> middleName;

    cout << "Enter your Last Name: ";
    cin >> lastName;

    // Concatenate the inputted strings to form a full name
    string fullName = firstName + " " + middleName + " "+ lastName;

    // Outputs the full name
    cout << "\nYour Full Name is: " << fullName << endl;

    //Outputs the length of the full name
    cout << "The length of your full name is: " << fullName.length() << endl;

    //Clears the value of middle name
    middleName.clear();

    //Outputs the full name without middle name
    cout << "Your name without the middle name is: " << firstName + middleName + " " + lastName;

    return 0;
}