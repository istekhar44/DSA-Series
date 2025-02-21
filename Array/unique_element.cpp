#include <iostream>
using namespace std;

int findUnique(int arr[], int size) {
    int unique = 0;
    for (int i = 0; i < size; i++) {
        unique ^= arr[i]; // XOR each element
    }
    return unique; // Return the unique element
}

int main() {
    int arr[] = {4, 1, 2, 1, 2}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size

    int uniqueElement = findUnique(arr, size);
    cout << "The unique element is: " << uniqueElement << endl; // Output result

    return 0;
}
