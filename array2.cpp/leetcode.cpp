
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 1}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size
    int ans = 0;

    for (int i = 0; i < size; i++) { // Fixed loop condition
        ans = ans ^ arr[i]; // XOR operation
    }

    cout << "Result: " << ans << endl; // Print the result
    return 0; // Return 0 to indicate successful execution
}
