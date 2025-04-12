#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];      // store the current element
        int j = i - 1;

        // shift elements to the right until correct spot for temp is found
        for (; j >= 0; j--) {
            if (arr[j] > temp) {
                arr[j + 1] = arr[j];
            } else {
                break; // stop if we found the right spot
            }
        }

        arr[j + 1] = temp; // insert temp at the correct position
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[7] = {3, 8, 4, 63, 23, 9, 1};
    int n = 7;

    cout << "Before sorting: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "After sorting: ";
    printArray(arr, n);

    return 0;
}
