#include <iostream>
#include <typeinfo>
using namespace std;

void print(char *p){
    cout << *p<< endl;
}

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

int temp [10];
cout << sizeof(temp) << endl;

int *ptr = &temp[0];
cout << sizeof(ptr)<<endl;

cout <<sizeof(*ptr)<<endl;

cout <<sizeof(&ptr)<<endl;

int a[20] = {3,5,6,7,6};
 cout << &a<<endl;
 cout << a<< endl;
 cout <<&a[0] <<endl;

 int *p = &a[20];

 cout <<&p<<endl;

int arr [10] ;
int arr = {2,4,5,6,7,8,9};

int *ptr = &arr[0];
cout << ptr <<endl;
ptr = ptr + 1;
cout << ptr <<endl;

char ch[6] = "abcd";
int arr[5] = {1,2,3,4,5};
cout <<arr <<endl;
cout <<ch <<endl;

char *c= &ch[0];
cout <<&ch <<endl;

char ch[6] ="abcde";
char *p= &ch[0];

print(p);









}