// Activity 1: Create any kind of program that consists of selection and iterative control structures, jump statements, and 2 function (main function not included).
#include <iostream>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C
int sum(int a, int b){
    return a + b;
}
int diff(int a, int b){
    return a - b;
}
int main()
{
    int num1, num2;

    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;
    cout << "---------------------------------------------- \n";
    cout << "The sum of both number is: " << sum(num1, num2) << endl;
    cout << "The difference of both number is: " << diff(num1, num2) << endl;

    return 0;
}