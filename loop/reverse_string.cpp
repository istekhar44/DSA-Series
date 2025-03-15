#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    // Get input from the user
    cout << "Enter a string: ";
    getline(cin, str);

    // Reverse the string
    string reversedStr(str.rbegin(), str.rend());

    // Output the reversed string
    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}

