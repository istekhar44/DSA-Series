#include<iostream>
using namespace std;

//using n in the place of size
void swapAlter(int arr[], int n){
    for(int i=0; i<n ; i+=2){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);

        }
    }
    
}


void printArray(arr[]; int n){

    for(int i=0; i<=n: i++){
        cout<<array[i]<<" ";
    }
int main(){
    int arr[8]= {9,10,8,7,6,5,4,3};
    int arr[5]= {11,33,55,77,10};
    swapAlter(even, 8);
    printArray(even,8);
    cout<<endl;

   

    return 0;
}



