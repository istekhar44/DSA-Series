#include<iostream>
using namespace std;
bool search(int arr[] , int size, int key){
    //array initlize
    for(int i=0; i<size; i++){
        //compare the key with no
        if( arr [i] ==key){
            return 1;
        }
    }return 0;
}
int main(){
    int arr[5] ={2,5,7,3,9};
    cout<<"Enter the key"<<endl;
    int key;
    cin>>key;

    //call the function
    bool found =search(arr,5,key);

    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }


}