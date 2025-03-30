#include <iostream>
#include <array>
using namespace std;

int main() {
    // Basic C-style array
    int basic[3] = {1, 2, 3};

    // STL array
    array<int, 4> a = {2, 5, 7, 8};
    
    int size = a.size();
    
    cout << "Elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // STL features
    cout << "Element at index 2: " << a.at(2) << endl;
    cout << "Is the array empty? " << (a.empty() ? "Yes" : "No") << endl;
    cout << "First element: " << a.front() << endl;
    cout << "Last element: " << a.back() << endl;

    // Additional STL functions
    cout << "Filling array with value 10" << endl;
    a.fill(10);  // Fill the array with value 10 in before array
    for (auto &el : a) {
        cout << el << " ";
    }
    cout << endl;

    // Swapping two arrays
    array<int, 4> b = {1, 2, 3, 4};
    cout << "\nSwapping with another array:" << endl;

    cout << "Array a before swap: ";       // 1️⃣ Prints the label
    for (auto &el : a) {                   // 2️⃣ Range-based for loop
    cout << el << " ";                  // 3️⃣ Prints each element followed by a space
      }
    cout << endl;                           // 4️⃣ Adds a newline for better formatting


    cout << "Array b before swap: ";
    for (auto &el : b) {
        cout << el << " ";
    }
    cout << endl;

    a.swap(b);

    cout << "Array a after swap: ";
    for (auto &el : a) {
        cout << el << " ";
    }
    cout << endl;

    cout << "Array b after swap: ";
    for (auto &el : b) {
        cout << el << " ";
    }
    cout << endl;

    // Displaying max_size
    cout << "\nMax size of the array: " << a.max_size() << endl;

    // Iterating using iterators
    cout << "\nIterating using iterators: ";
    for (auto it = a.begin(); it != a.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
