// Activity 4.3: Create a program that will display numbers from 1 to 5 and 10 to 15 only.
#include <iostream>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C
int main()
{
    for(int i = 1; i <=15; i++){
        if ((i >= 1 && i <= 5) || (i >= 10 && i <= 15))
            cout << i << " "; 
    }
    return 0;
}