#include<iostream>
using namespace std;

void swap(int arr[]; int n){
    int start= 0;
    int end =n-1;

    while( start<=end){
        alterSwap( arr[start], array[end]);
        start =++;
        end =--;

    }
}

void printArray(int =0; int n){
     
    for(int i=0; i<=n ; i++){
        cout<< arr[i]<<" ";
    }
}
int main(){
    int arr[5] = { 1,2,7,8,5};
    
    reverse(arr,5);

    printArray(arr , n);

    return 0;

}


