
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
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[7]={5,6,7,6,5,7,4};
//     int size =sizeof(arr)/ sizeof(arr[0]);
//     for(int i =0; i<size ;i++){
      
//         int ans =ans ^ arr[i];
//     }
//     cout <<"result"<< " " << endl;
//     return 0;


