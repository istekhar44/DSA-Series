#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to count prime numbers in the array less than 15
int countPrimesInArray(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 15 && isPrime(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[5] = {4, 5, 6, 7, 16};  // Added a 5th element for size 5
    int size = 5;

    int primeCount = countPrimesInArray(arr, size);
    cout << "Number of prime numbers less than 15 in the array: " << primeCount << endl;

    return 0;
}

 