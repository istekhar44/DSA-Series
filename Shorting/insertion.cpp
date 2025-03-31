#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Writing to a file
    ofstream outFile("data.txt");
    if (outFile.is_open()) {
        outFile << "Hello, File Handling in C++!\n";
        outFile << "This is line 2.\n";
        outFile << 42 << endl;
        outFile.close();
    } else {
        cout << "Unable to open file for writing." << endl;
    }

    // Reading from a file
    ifstream inFile("data.txt");
    string line;
    if (inFile.is_open()) {
        cout << "File contents:\n";
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file for reading." << endl;
    }

    return 0;
} 