// Activity 1: Create any kind of program that consists of selection and iterative control structures, jump statements, and 2 function (main function not included).
#include <iostream>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C
int main()
{
    int num = 1;
    int max;

    cout << "Enter a maximum number: ";
    cin >> max;

    while(num <= max){
        cout << num << " did not exceed on a given maximum number" << endl;
        num++;
    }

    cout << "The number achieve it's maximum limit!";

    return 0;
}