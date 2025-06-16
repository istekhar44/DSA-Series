#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Ask the user for size of the 2D array
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Create 2D array
    int arr[100][100]; // assuming maximum size is 100x100

    // Input elements
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Print the 2D array
    cout << "The 2D array is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int row, col;
    cout<<"Enter the row "<<endl;
    cin>>row>>endl;
    cout<<"Enter the column"<<endl;
    cin>>col>>endl;
    for(int row = 0; row<= 4 ; row++){
       for(int col = 0) 
    }

}
