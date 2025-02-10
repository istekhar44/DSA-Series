#include <iostream>
using namespace std;

// in void statement there is no use of return . 

//function signature
void printcounting(int n){
    //function body
    for(int i=1; i<=n; i++){
        cout<< i << " ";

    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
// function call
    printcounting(n);
    return 0;
}
