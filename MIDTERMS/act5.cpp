// Activity 5: Create a calculator where the inputs are binary numbers only. Use input validation for binary numbers.
#include <iostream>
#include <string>
#include <bitset>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C

// Function that checks if the inputs are Binary
bool binaryChecker(const string& binaryInput) {
   for(char eachNum : binaryInput){
      if (eachNum != '0' && eachNum != '1'){
         cout << "Invalid input. Please enter a Binary Number ONLY!\n";
         return false;
      }
   }
   return true;
}

// Function that converts string(Binary) into integer(Decimal)
int binaryToDecimal(const string& binaryInput);

// Function that converts integer(Binary) into string(Decimal)
string decimalToBinary(int);

int main()
{
   string binaryNum1, binaryNum2;

   // Input validation
   do{
      cout << "Enter Binary number 1: ";
      cin >> binaryNum1;
   } while(!binaryChecker(binaryNum1));

   do{
      cout << "Enter Binary number 2: ";
      cin >> binaryNum2;
   } while(!binaryChecker(binaryNum2));

   // Operations
   int b1 = binaryToDecimal(binaryNum1);
   int b2 = binaryToDecimal(binaryNum2);

   int sum = b1 + b2;
   int difference = b1 - b2;
   int product = b1 * b2;

   // Display outputs
   cout << endl;
   cout << "Sum is: " << decimalToBinary(sum) << " (+)" << endl;
   cout << "Difference is: " << decimalToBinary(difference) << " (-)" << endl;
   cout << "Product is: " << decimalToBinary(product) << " (*)" << endl;

   // Check if the divisor can be divide
   if(b2 == 0){
      cout << "Quotient is: Divisor is cannot be equivalent to zero!" << endl;
      cout << "Modulus is: Divisor is cannot be equivalent to zero!";
   }
   else{
      int quotient = b1 / b2; 
      int modulus = b1 % b2;
      cout << "Quotient is: " << decimalToBinary(quotient) << " (/)" << endl;
      cout << "Modulus is: " << decimalToBinary(modulus) << " (%)";
   }

   return 0;
}

int binaryToDecimal(const string& binaryInput){
   int decimal = 0;
   for(char eachNum : binaryInput){
      decimal = decimal * 2 + (eachNum - '0'); 
   }

   return decimal;
}

string decimalToBinary(int result){
   if (result == 0) {
      return "0";
   }
   string binary ="";
   while (result > 0) {
      binary = to_string(result % 2) + binary;
      result /= 2;
   }

   return binary;
}