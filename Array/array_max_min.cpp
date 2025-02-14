#include<iostream>
#include<climits>  // Include this header for INT_MIN
using namespace std;

// Function to find the maximum element in an array
int getMax(int num[], int n){
    int max = INT_MIN;  // Initialize max with the smallest possible integer value

    for(int i= 0; i < n; i++){
        if(num[i] > max){
            max = num[i];  // Update max if the current element is greater
        }
    }
    return max;  // Return the maximum value found
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Check if the size is within the allowed limit
    if(size > 100 || size <= 0){
        cout << "Invalid size! Size should be between 1 and 100." << endl;
        return 1;  // Exit the program with an error code
    }

    int num[100];

    // Taking input for the array
    cout << "Enter " << size << " numbers: ";
    for(int i = 0; i < size; i++){
        cin >> num[i];
    }

    // Calling the getMax function to find the maximum value in the array
    int maxValue = getMax(num, size);

    // Output the maximum value
    cout << "The maximum value in the array is: " << maxValue << endl;

    return 0;
}