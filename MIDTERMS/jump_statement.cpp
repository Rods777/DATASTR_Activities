// Activity 1: Create any kind of program that consists of selection and iterative control structures, jump statements, and 2 function (main function not included).
#include <iostream>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C
int main()
{
    int i = 0;

    while(true){
        cout << i << endl; 
        if (i == 7){
            goto stop;
        }
        i++;
    }

    stop:
        cout << "The loop ends!";
    return 0;
}