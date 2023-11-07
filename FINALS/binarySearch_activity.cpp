// Activity 2: Create a program that will input 15 names in array then will search for a specific name and display the index number of the name. If the name is not found in the array prompt error message then type again a name to search in array. Use linear search AND binary search (2 programs for this activity)
#include <iostream>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C

// Function that performs binary search
int binarySearch(const string names[], int low, int high, const string& searchName){
    while (low <= high){
        int mid = low + (high - low) / 2;

        if(names[mid] == searchName){
            return mid;
        } else if(names[mid] < searchName){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // Returns -1 if no Names found in the array
}

int main()
{
    // Binary Search
    string names[15];
    int totalNames = 15;
    int low, high;

    // Ask the user inputs
    cout << "Enter 15 Names (Alphabetically):" << endl;
    for(int i = 0; i < totalNames; i++){
        cout << i + 1 << ": ";
        cin >> names[i];
    }

    // Ask user to enter a inputted name to be search
    string searchName;
    int indexResult;

    low = 0;
    high = totalNames - 1;

    do{
        cout << "\nSearch Name: ";
        cin >> searchName;
        // Search for the name
        indexResult = binarySearch(names, low, high, searchName);

        if(indexResult != -1){ // Exits the loop and displays its index once found
            cout << "\"" << searchName << "\"" << " found in index no.: " << indexResult;
            break;
        } else{
            cout << "Name not found. Please Enter a Name Again!\n"; // Will ask user to type a name again if not found
        }
    } while(true);

    return 0;
}