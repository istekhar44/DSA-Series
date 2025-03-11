#include <iostream>
using namespace std;

// Questin to find the ncr ?

long long factorial(int n) {  // Changed return type to long long
    long long fact = 1;  // Avoid integer overflow
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

long long nCr(int n, int r) {
    if (r > n) return 0;  // Edge case: r cannot be greater than n
    long long num = factorial(n);
    long long denom = factorial(r) * factorial(n - r);
    return num / denom; // Division after multiplication to avoid precision errors
}

int main() {
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    cout << "Answer is: " << nCr(n, r) << endl;
    return 0;
}

