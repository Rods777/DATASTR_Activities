// Activity 5: Create a program that will sort the names Clark, Mark, Eric, Ericson, Michael, Joshua, Ely, Christof, Alfie in ascending order using selection sort.
#include <iostream>
#include <vector>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C

// Function that performs Selection Sort
void selectionSort(vector<string>& names){
    for(int i = 0; i < (names.size() - 1); i++){
        int minIndex = i; 
        for(int j = i + 1; j < names.size(); j++){ 
            if(names[j] < names[minIndex]){ 
                minIndex = j;
            }
        }
        swap(names[minIndex], names[i]);
    }
}

// Displays the Array
void displayArray(vector<string>& names){
    for(int i = 0; i < names.size(); i++){
        cout << names[i] << " ";
    }

    cout << endl;
}

int main()
{
    vector<string> names = { "Clark", "Mark", "Eric", "Ericson", "Michael", "Joshua", "Ely", "Christof", "Alfie"};

    // Display Unsorted Array
    cout << "Unsorted Names: ";
    displayArray(names);

    // Sorts the Array using Selection
    selectionSort(names);

    // Display Selection Sorted Array
    cout << "Selection Sorted Names (Ascending Order): "; 
    displayArray(names);

    return 0;
}