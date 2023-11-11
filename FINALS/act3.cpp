// Activity 3: Create a program that will sort the numbers -3, -10, 5, 8, 7, 12 ,45, 16, 20, -2, 0, -8, 1 in descending order using bubble sort algorithm.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C

// Function that performs Bubble Sort
void bubbleSort(int num[], int length){
    bool swapped;
    do{
        swapped = false;
        for (int i = 0; i < (length - 1); i++){
            if(num[i] < num[i + 1]){ 
                swap(num[i], num[i + 1]); // Swaps the array
                swapped = true;
            }
        }  

    } while(swapped);

}

// Function that outputs the Array Values
void displayArray (int num[], int length){
    for(int i = 0; i < length; i++){
        cout << num[i] << " ";
    }
    cout << endl;
}

int main()
{
    int number[] = {-3, -10, 5, 8, 7, 12, 45, 16, 20, -2, 0, -8, 1};
    int arrayLength = sizeof(number) / sizeof(number[0]);

    // Displaying Unsorted Array
    cout << "Unsorted Array: ";
    displayArray(number, arrayLength);


    // Displaying Bubble Sorted Array (Descending Order)
    bubbleSort(number, arrayLength);
    cout << "Bubble Sorted Array (Descending Order): ";
    displayArray(number, arrayLength);

    return 0;
}