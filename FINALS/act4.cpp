// Activity 4: Create a program that will sort numbers 0, -2 ,-5, 8, 6, 10, 15, 99, 33, -9, -12, 8,-2 in descending order using insertion sort.
#include <iostream>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C

// Function that performs Insertion Sort
void insertionSort(int num[], int length){
    for (int i = 1; i < length; i++){ 
        int key = num[i];
        int j = i - 1; 

        while(j >= 0 && key > num[j]){ 
            num[j + 1] = num[j]; 
            j--;
        }

        num[j + 1] = key;  
    }
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
    int number[] = {0, -2 ,-5, 8, 6, 10, 15, 99, 33, -9, -12, 8, -2};
    int arrayLength = sizeof(number) / sizeof(number[0]);

    // Displaying Unsorted Array
    cout << "Unsorted Array: ";
    displayArray(number, arrayLength);


    // Displaying Insertion Sorted Array (Descending Order)
    insertionSort(number, arrayLength);
    cout << "Insertion Sorted Array (Descending Order): ";
    displayArray(number, arrayLength);

    return 0;
}