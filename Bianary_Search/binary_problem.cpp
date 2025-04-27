#include <iostream>
using namespace std;

// Corrected binary search function
int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2; // Correct mid calculation
        
        if (arr[mid] == key) {
            return mid; // Return index
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[5] = {1, 3, 5, 7, 8};
    int key;
    
    cout << "Enter the key: ";
    cin >> key;
    
    // Correct function call
    int index = binarySearch(arr, 5, key);
    
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }
    
    return 0;
}
