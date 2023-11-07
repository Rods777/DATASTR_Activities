// Activity 4.4: Create a program that will display real numbers that is greater than 50 and less than 100.
#include <iostream>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C
int main()
{
    for(double i = 50.1; i <= 99.9; i += 0.1){
        cout << i << " "; 
    }
    return 0;
}