// Activity 6: Create a program that will convert positive and negative decimal numbers into binary number using signed magnitude method, 1's complement and 2's complement.
#include <iostream>
#include <bitset>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C

void signedMagnitude(int);
bitset<16> onesComplement(int);
bitset<16> twosComplement(int);

int main(){
    int decimal;
    // Ask user to input decimal number
    cout << "Enter Decimal number (Positive or Negative): ";
    cin >> decimal;
    cout << endl;
    // Display output
    cout << "Binary Number" << endl;
    cout << "Signed-magnitude method: ";
    signedMagnitude(decimal);
    cout << "1's complement: " << onesComplement(decimal) << endl;
    cout << "2's complement: " << twosComplement(decimal) << endl;

    return 0;
}

// Function that outputs the signed-magnitude of the inputted decimal
void signedMagnitude(int num){
    bitset<16> binary(abs(num));
    if(num < 0){
        cout << "1" << binary << endl;
    }
    else{
        cout << "0" << binary << endl;
    }
}

// Function that returns the 1's Complement of the inputted decimal
bitset<16> onesComplement(int num){
    bitset<16> binary(abs(num));
    if(num < 0){
        binary.flip();
    }
    return binary;
}

// Function that returns the 2's Complement of the inputted decimal
bitset<16> twosComplement(int num){
    bitset<16> binary(abs(num));
    if(num < 0){
        binary = binary.flip();
        binary = (binary.to_ulong() + 1);
    }
    return binary;
}