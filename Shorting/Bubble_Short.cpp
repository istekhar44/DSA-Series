#include<iostream>
using namespace std;

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {       // Outer loop
        for (int j = 0; j < n - i - 1; j++) {   // Inner loop
            if (arr[j] > arr[j + 1]) {          // Compare adjacent elements
                swap(arr[j], arr[j + 1]);       // Swap if they are in the wrong order
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main() {
    int n = 6;
    int arr[] = {5, 6, 2, 1, 21, 8};

    // Call bubbleSort and printArray functions
    bubbleSort(arr, n);    // Pass the array and its size
    printArray(arr, n);    // Pass the array and its size

    return 0;
}