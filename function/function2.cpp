#include <iostream>
using namespace std;

//odd -> 0
//even --> 1
bool isEven( int a ){
    if(a&1){ //return false for odd  fale=0
        return 0;

    }
    else{ //return true for even true=1
        return 1;
    }
}
int main(){
    int num;
    cin>>num;

    if(isEven(num)){
        cout<<num<<"The number is Even"<<endl;
    }
    else{
        cout<<num<<"The number is odd"<<endl;
    }

}