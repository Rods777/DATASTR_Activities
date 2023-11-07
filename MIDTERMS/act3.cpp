// Activity 3: Create an algorithm and program that will compute the sum of the digit entered  using do...while loop then implement the preceding divisibility test by 2,3,4,5,6,7,8,9. 
#include <iostream>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C
void sum (int num){
    int sumOfDigit = 0;
    do {
        int digit = num % 10;
        sumOfDigit += digit;
        num /= 10;
    } while (num != 0);

    cout << "The sum of the digits is: " << sumOfDigit << endl;
}
void divisible(int num){
    for(int i = 2; i < 10; i++){
        int div = num % i;
        if(div == 0)
            cout << num << " is divisible by " << i << endl;
        else
            cout << num << " is not divisible by " << i << endl;
    }
}
int main()
{
    int positiveNum;
    cout << "Enter a positive number: ";
    cin >> positiveNum;

    sum(positiveNum);
    divisible(positiveNum);
    return 0;
}