#include <iostream>
using namespace std;

int factorial(int n) {
    int factorial = 1; // Corrected spelling and initialization
    for (int i = 1; i <= n; i++) { // Corrected loop initialization
        factorial = factorial * i;
    }
    return factorial;
}

int nCr(int n, int r) {
    int num = factorial(n);
    int denom = factorial(r) * factorial(n - r);
    int ans = num / denom;
    return ans;
}

int main() {
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int r;
    cout << "Enter the value of r: " << endl;
    cin >> r;

    cout << "Answer is: " << nCr(n, r) << endl; // Correctly call nCr function
    return 0; // Added return statement for main
}
