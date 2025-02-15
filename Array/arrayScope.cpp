#include <iostream>
using namespace std;

void update(int arr[],int n){
    cout<<endl<<"Inside the function"<<endl;
    //update array's first element
    arr[0]=120;
    //printing the aray
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;

    cout <<"Going back to main function "<<endl;

}
int main(){
    int arr[3] = {2 ,5,6} 
    update(arr,3);

    //print the arry 
    cout<<end<<"printing the main function "<<endl;
    for(int i=0; i<3; i++){
        cout<<arr [i] <<" ";
    }
    cout<<endl;

    return 0;

}