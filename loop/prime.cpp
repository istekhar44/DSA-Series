#include <iostream>
using namespace std;
int main(){
    //Programe for prime no ?
    int i=2;
    int n;
    cin>>n;
while (i<=n)
{
    if(n%i==0){
        cout<<"Not prime No"<<i<<endl;
    }
    else{
        cout<<"this no is prime"<<i<<endl;
    }
    i=i+1;
}

//pattern question ?

 int n;
 cin>>n;
 cout<<"enter the number"<<endl;
 int i=1;
 while (i<=n)
 {
    int j=1;
    while(j<=n){
        cout<<"*";
        j =j+1;
    
    } 
    cout<<""<<endl;
    i=i+1;
    
   
 }

//Triangular patter Question ?
int n;
cin>>n;
int row=1;
while (row<=n)
{
    int col=1;
    while (col<=row)
    {
        cout<<"*";
        col =col+1;
    
    }
    row =row+1;
    cout<<endl;
    
}

//Replace the star with the number ?

int n;
cin>>n;
int row=1;
while (row<=n)
{
    int col=1;
    while (col<=n)
    {
        cout<<col;
        col=col+1;
    }
    row =row+1;
    cout<<endl;
    
} 
// How to use Bitwise operator 

int a=3;
int b=4;

cout<< "a&b=" << (a&b) <<endl;  //AND
cout<< "a^b="<< (a^b) <<endl;   //EXOR
cout<< "~a=" << (~a) <<endl;    //not
cout<<"a|b="<< (a|b) <<endl;   //OR */



}


    
