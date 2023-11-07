// Activity 2: Create a program that will input 15 names in array then will search for a specific name and display the index number of the name. If the name is not found in the array prompt error message then type again a name to search in array. Use linear search AND binary search (2 programs for this activity)
#include <iostream>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C
int main()
{
    // Linear Search
    string names[15];
    int totalNames = 15;

    // Ask the user inputs
    cout << "Enter 15 Names:" << endl;
    for(int i = 0; i < totalNames; i++){
        cout << i + 1 << ": ";
        cin >> names[i];
    }

    // Ask user to enter a inputted name to be search
    string searchName;
    bool searchFound = false;
    int index;

    do{
        cout << "\nSearch Name: ";
        cin >> searchName;
        // Search for the name
        for(int i = 0; i < totalNames; i++){
            if (names[i] == searchName){
                // Exits the loop and displays its index once found
                index = i;
                cout << "\"" << names[i] << "\"" << " found in index no.: " << index;
                searchFound = true;
                break;
            }
        }
        if(searchFound != true){
            cout << "Name not found. Please Enter a Name Again!\n"; // Will ask user to type a name again if not found
        }
    } while(!searchFound);

    return 0;
}