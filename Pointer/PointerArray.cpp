#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
int array[5] = {3,5,6,7,9};
int *ptr = &array[5];

cout<<"print the value of array" <<&array<<" "<<endl;
cout <<"Adress of the array"<<ptr<<endl;

//print the type of the array 
cout <<"Type of the array"<<typeid(array).name()<<endl;

//print the first element of the array
cout <<"1th element"<<*array<<endl;

//pluse 1 the first element of the array
cout <<"1rd element of the array "<<*array+1<<endl;

//fouth element of the array
cout <<"print the fourth element"<<array[4]<<endl;

//print the first elemnet of the array
cout <<(*array)<<endl;

cout 







}