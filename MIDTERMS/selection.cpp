// Activity 1: Create any kind of program that consists of selection and iterative control structures, jump statements, and 2 function (main function not included).
#include <iostream>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C
int main()
{
    int age;
    cout << "====================================" << endl;
    cout << "          Age Classification        " << endl;
    cout << "====================================" << endl;
    cout << "Toddlers: 0-2 years old        " << endl;
    cout << "Preschoolers: 3-5 years old    " << endl;
    cout << "Children: 6-12 years old       " << endl;
    cout << "Teenagers: 13-19 years old     " << endl;
    cout << "Young Adults: 20-39 years old  " << endl;
    cout << "Middle-Aged Adults: 40-59 years old " << endl;
    cout << "Senior Citizen: 60+ years old  " << endl;
    cout << "====================================" << endl;

    cout << "Enter your age: ";
    cin >> age;

    if(age == 0 && age <= 2){
        cout << "You are a Toddler!";
    }
    else if(age >= 3 && age <= 5){
        cout << "You are a Preschooler!";
    }
    else if(age >= 6 && age <= 12){
        cout << "You are a Child!";
    }
    else if(age >= 13 && age <= 19){
        cout << "You are a Teenager!";
    }
    else if(age >= 20 && age <= 39){
        cout << "You are a Young Adult!";
    }
    else if(age >= 40 && age <= 59){
        cout << "You are a Middle-Aged Adult!";
    }
    else if(age >= 60){
        cout << "You are a Senior Citizen!";
    }
    else{
        cout << "Invalid Age!";
    }

    return 0;
}