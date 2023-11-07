// Activity 4.2: Create a program that will display odd numbers from 1 to 15.
#include <iostream>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C
int main()
{
    for(int i = 1; i <=15; i++){
        if (i % 2 != 0)
            cout << i << " "; 
    }
    return 0;
}