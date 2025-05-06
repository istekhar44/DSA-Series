#include<iostream>
using namespace std;

void update(int **p){
    // p = p +1;

    // *p = *p + 1;

    **p= **p + 1;

}

int main(){
    
    int value = 45 ;
    int* p = &value;
    //make the double pointer 
    int** p2= &p;

    cout <<"Print value :" <<value <<endl;
    cout << "print Address :"<<&value<<endl;

    cout << "print "<<p<<endl;
    cout<<"print the address "<<&p<<endl;
    cout <<*p2<<endl;
    cout<<"print the first element "<<**p2<<endl;   //jis value koprint kerana ha uska liya utna star laga do


    

    
return 0;
}