// Activity 2: Create an algorithm  and program that will ask the name of the student then, calculate the final grade of the student by getting the average of four quarter grades. Display the following descriptor and remarks of his/her final grade based of the attach image below:
#include <iostream>
#include <string>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C
int main()
{
    string name;
    string rating;
    string remarks;
    int quarter[4];
    int sum;

    cout << "Enter name of the students: ";
    getline(cin, name);
    
    for(int i = 0; i < 4; i++){
        cout << "Quarter " << i + 1 << ": ";
        cin >> quarter[i];
        sum += quarter[i];
    }

    int total = sum / 4;

    if(total >= 90 || total == 100){
        rating = "Outstanding";
        remarks = "Passed";
    }
    else if (total >= 85 || total == 89)
    {
        rating = "Very Satisfactory";
        remarks = "Passed";
    }
    else if (total >= 80 || total == 84)
    {
        rating = "Satisfactory";
        remarks = "Passed";
    }
    else if (total >= 75 || total == 79)
    {
        rating = "Fairly Satisfactory";
        remarks = "Passed";
    }
    else if (total < 75)
    {
        rating = "Did not meet Expectations";
        remarks = "Failed";
    }

    cout << "Hi " << name << "! Your final grade is: " << total << endl;
    cout << "You have a " << rating << " rating!" << endl;
    cout << "Remarks: " << remarks << endl;
    return 0;
}