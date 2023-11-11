// Activity 3: Create a program that will sort the numbers -3, -10, 5, 8, 7, 12 ,45, 16, 20, -2, 0, -8, 1 in descending order using bubble sort algorithm.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C

// Function that performs Bubble Sort
void bubbleSort(int arr[], int length){
    bool swapped;
    do{
        swapped = false;
        for (int i = 0; i < (length - 1); i++){
            if(arr[i] < arr[i + 1]){ 
                swap(arr[i], arr[i + 1]); // Swaps the array
                swapped = true;
            }
        }  

    } while(swapped);

}

// Function that outputs the Array Values
void displayArray (int arr[], int length){
    for(int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[] = {-3, -10, 5, 8, 7, 12, 45, 16, 20, -2, 0, -8, 1};
    int arrayLength = sizeof(array) / sizeof(array[0]);

    // Displaying Unsorted Array
    cout << "Unsorted Array: ";
    displayArray(array, arrayLength);


    // Displaying Bubble Sorted Array (Descending Order)
    bubbleSort(array, arrayLength);
    cout << "Bubble Sorted Array (Descending Order): ";
    displayArray(array, arrayLength);

    return 0;
}