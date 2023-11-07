// Activity 7.1: Using C++, create a program that will accept 10 integer values that will be inputted to the array and then display the odd numbers and even numbers from the array. 
#include <iostream>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C

int main(){

    int num[10];

    //Ask user input
    cout << "Enter 10 numbers: " << endl;

    for(int index = 0; index < 10; index++){
        cin >> num[index];
    }

    // Display output
    cout << "\nOdd numbers are: " << endl;

    for(int index = 0; index < 10; index++){ // display odd numbers 
        if(num[index] % 2 != 0){
            cout << num[index] << " ";
        }   
    }

    cout << "\n\nEven numbers are: " << endl;

    for(int index = 0; index < 10; index++){ // display even numbers 
        if(num[index] % 2 == 0){
            cout << num[index] << " ";
        }   
    }

    return 0;
}