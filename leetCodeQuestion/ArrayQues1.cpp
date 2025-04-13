//Reverse the array {11,7,3,12,4}
#include <iostream>
#include <vector>
using namespace std;
void merge(int arr1[], int n ,int  arr2[] , int m , int arr3[]){
    int i = 0 , j = 0;
    int k = 0;
    while (i<n && j<m){
        if(arr1[i] < arr2[j] ){
            arr3[k++] = arr1[i++];  //put the element 
        }
        else{
            arr3[k++] = arr2[j++];
        }

    }
    //copy first array k element ko 
    while (i<n){
        arr3[k++] = arr1[i++];
    }
    //copy kardo second aray k remining element ko 
    while (j<m){
        arr2[k++] = arr2[j++];
    }
}
void print(int ans[], int n ){
    for(int i= 0; i<n ; i++){
        cout<<ans[i]<<"  ";
    }
}
int main(){
    int arr1[5] = {4,6,8,0,23};
    int arr2[5] = { 34, 56, 78, 89, 24};
    int arr3[10] = {0};
   

    print(arr3 ,10);

    merge(arr1,5 , arr2 ,5,arr3);
    return 0;



}