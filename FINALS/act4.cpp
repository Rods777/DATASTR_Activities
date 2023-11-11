// Activity 4: Create a program that will sort numbers 0, -2 ,-5, 8, 6, 10, 15, 99, 33, -9, -12, 8,-2 in descending order using insertion sort.
#include <iostream>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C

// Function that performs Insertion Sort
void insertionSort(int arr[], int length){
    for (int i = 1; i < length; i++){ 
        int key = arr[i];
        int j = i - 1; 

        while(j >= 0 && key > arr[j]){ 
            arr[j + 1] = arr[j]; 
            j--;
        }

        arr[j + 1] = key;  
    }
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
    int array[] = {0, -2 ,-5, 8, 6, 10, 15, 99, 33, -9, -12, 8, -2};
    int arrayLength = sizeof(array) / sizeof(array[0]);

    // Displaying Unsorted Array
    cout << "Unsorted Array: ";
    displayArray(array, arrayLength);


    // Displaying Insertion Sorted Array (Descending Order)
    insertionSort(array, arrayLength);
    cout << "Insertion Sorted Array (Descending Order): ";
    displayArray(array, arrayLength);

    return 0;
}