// Activity 7.2: Using C++, create a program that will only accept even numbers in array.
#include <iostream>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C

int main(){
    int evenNumbers[5], index = 0;
    string sequence[5] = {"First", "Second", "Third", "Fourth", "Fifth"};

    cout << "-------- Enter 5 even numbers --------\n\n";
    // Ask user to input
    while(index < 5){
        cout << "Enter the " << sequence[index] << " Even Number: ";
        cin >> evenNumbers[index];
        if(evenNumbers[index] % 2 != 0){ // Checks if the number is even
            cout << "\n!!! Invalid Input, Please enter an Even Number ONLY !!!\n" << endl;
        }else{
            index++;
        }
    }

    // Display all the number that user inputted
    cout << "\nThe even numbers you inputted are: " << endl;
    for(index = 0; index < 5; index++){
        cout << evenNumbers[index] << " ";
    }
    return 0;
}