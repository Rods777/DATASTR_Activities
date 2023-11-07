// Activity 8: Using Array, create a program that will ask for  ten (10) numbers and it will display the values of (ten) 10 numbers, then display the values one by one. Calculate the sum and average of the ten (10) numbers.
#include <iostream>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C

int main(){

    double num[10], sum;
    string sequence[10] = {"First", "Second", "Third", "Fourth", "Fifth", "Sixth", "Seventh", "Eighth", "Ninth", "Tenth"}; 

    // Ask user input
    cout << "Enter TEN numbers: " << endl << endl;

    for (int index = 0; index < 10; index++){
        cout << "Enter the " << sequence[index] << " number: ";
        cin >> num[index];
        sum += num[index]; // Calculates the sum of all inputted numbers
    }

    // Outputs all the inputted numbers
    cout << "\nThe numbers are: \n" << endl;

    for (int index = 0; index < 10; index++){
        cout << "The " << sequence[index] << " number is: " << num[index] << endl;
    }

    double average = sum / 10; // Calculates the average of all inputted numbers 

    cout << "\n\nThe Sum of the numbers is: " << sum << endl;
    cout << "The Average of the numbers is: " << average;

    return 0;
}