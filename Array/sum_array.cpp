#include <iostream>
using namespace std;

int arrSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size = 5;
    int arr[size];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Call the function
    int sum = arrSum(arr, size);

    // Output the sum
    cout << "Sum of the array elements: " << sum << endl;

    return 0;
}
