#include <iostream>
using namespace std;
//function making
void printArray( int arr[], int size){
    cout<<"printing the array"<<endl;
    for(int i=0; i<size ; i++){
        cout<< arr[i]<<" ";
    }
    cout <<"the printing is done"<<endl;
}

int main(){
    //declared
    int num[15];

    //asssingned the array
    cout<<"value at 14 index" << num[14] <<endl;
    //This give the random value of the index 14

//second arrar technique
    int second[19] ={0};
    second[5] =30;
    second[19]= 50;
    second[18]= 40;
int n=19;
    for(int i=0; i<n; i++){
        cout<<second[i]<<" ";
    }


}




















//different types of technique in the array

/*
int main(){
    // giving the less element in the array and printing the more element of the array?
   int third[10] ={3,5};
    int n =10;
    for(int i=0; i<=n ; i++){
        cout<< third[i] <<" ";
        return 0;
    }
}

int main{
int arr[7] = {0,4};
// give the array element no
arr [3] =5;
arr [5] =8; 
arr [6] =10;
int n=7;
for(int i=0; i<n ;i++){
    cout<< arr [i] <<" ";
}
return 0;
}*/