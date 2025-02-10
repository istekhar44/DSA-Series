#include <iostream>
using namespace std;
// Prime no --> 1
//Not Prime no --> 0
bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i == 0 ){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    if(isPrime(n)){
        cout<<"this is prime"<<endl;
    }
    else{
        cout<<"this no in Not Prme"<<endl;
    }
}