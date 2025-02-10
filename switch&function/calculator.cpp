#include <iostream>
using namespace std;
int main(){
 int a,b;

    cout<<"Enter the value of a ="<<endl;
    cin>>a;
    
    cout<<"Enter the value of b ="<<endl;
    cin>>b;
    

    char op;
    cout<<"Enter the operation"<<endl;
    cin>> op;
    
    switch(op){
        case '+': cout<<"Add the value "<< (a+b) <<endl;
        break;
        case '-': cout<<"Subtract the value"<<(a-b)<<endl;
        break;
        case '*': cout<<"Multiply the value"<<(a*b)<<endl;
        break;
        case  '%' : cout<<"Divide the value"<<(a%b)<<endl;
        break;
        default : cout<<"enter the valid operation"<<endl;
    }
}
        