#include<iostream>
using namespace std;
void selectionShort( int arr[] , int n){
    for(int i= 0 ; i < n-1 ; i++){
        int minIndex = i;
        for(int j =i+1  ;j < n ; j++){
            if (arr[j] < arr [minIndex])
            minIndex  = j;
            swap( arr[minIndex] , arr[i]);
        }
    } 
}
void printArray(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[5] = {8, 4,9,7,10};
    
    int n = sizeof(arr)/ sizeof(arr[0]);

    cout << " print the accutal array" ;
    printArray(arr , n);

    cout << "print the shorted Array";
    selectionShort(arr , n);
    printArray(arr ,n);

return 0;
}