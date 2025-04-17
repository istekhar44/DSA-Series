#include<iostream>
using namespace std;

// Function to swap alternate elements in the array
void swapAlter(int arr[], int n){
    for(int i = 0; i < n; i += 2){
        if(i + 1 < n){
            swap(arr[i], arr[i + 1]);
        }
    }
}

// Function to print the array
void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int even[8] = {9, 10, 8, 7, 6, 5, 4, 3};
    int odd[5] = {11, 33, 55, 77, 10};

    // Swap alternate elements in the even array
    swapAlter(even, 8);
    printArray(even, 8);

    // Swap alternate elements in the odd array
    swapAlter(odd, 5);
    printArray(odd, 5);

    return 0;
}




