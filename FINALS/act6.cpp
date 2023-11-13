// Activity 6: Create a program that will sort a numbers entered by the user in ascending order using merge sort algorithm. Entering of numbers will stop if the user enter a letter.
#include <iostream>
#include <vector>
#include <limits>
using namespace std;
// Name: Cuyag, Rodel Q. Section: BSCS-2C

void merge(vector<int> &arr, int left, int middle, int right){
    int n1 = middle - left + 1;
    int n2 = right - middle;

    vector<int> leftArray(n1);
    vector<int> rightArray(n2);

    for(int i = 0; i < n1; i++)
        leftArray[i] = arr[left + i];
    for(int j = 0; j < n2; j++)
        rightArray[j] = arr[middle + 1 + j];

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2){
        if(leftArray[i] <= rightArray[j]){
            arr[k] = leftArray[i];
            i++;
        }else{
            arr[k] = rightArray[j];
            j++;
        }

        k++;
    }

    while(i < n1){
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &arr, int left, int right){
    if(left < right){
        int middle = left + (right - left) / 2;

        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        merge(arr, left, middle, right);
    }
}


// Display the array
void displayArray (vector<int> &arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main()
{   
    // Ask for the Array Length
    int arrayLength;

    cout << "========================================\n";
    cout << "Enter the array size: ";
    cin >> arrayLength;

    // Input Validation
    while(cin.fail() || arrayLength < 1){ 
        cout << "\n!!! Error: Please enter a positive\ninteger ONLY for the array size !!!\n\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter the array size: ";
        cin >> arrayLength;
    }
    
    cout << "----------------------------------------\n\n";
    
    // Ask user to input the elements
    vector<int> numbers(arrayLength);
    
    cout << "Enter the elements of the array: \n";;
    for(int i = 0; i < arrayLength; i++){
        cout << i + 1 << ": ";
        while(!(cin >> numbers[i])){
            cout << "\n!!! Error: Please enter an integer ONLY !!!\n\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << i + 1 << ": ";
        }
    }

    cout << "\n---------------------------------------\n\n";

    // Display the unsorted inputs
    cout << "Unsorted Inputs: ";
    displayArray(numbers);

    // Perform Merge Sort
    mergeSort(numbers, 0, arrayLength - 1);

    // Display the Merge Sorted inputs
    cout << "Merge Sorted Inputs: ";
    displayArray(numbers);

    cout << "\n========================================";

    return 0;
}