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
    
    // call the function
    if(isEven(num)){
        cout<<num<<"The number is Even"<<endl;
    }
    else{
        cout<<num<<"The number is odd"<<endl;
    }

}



//find this no is prime or not
#include <iostream>
using namespace std;
bool isPrime(int a){
    for(int i = 0; i < a ; i++){
        if (a%2 ==0){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int main(){
    int a;
    cout <<"Enter the value of a:"<<endl;
    cin>>a;

    if (isPrime(a)){
        cout<<"this no is not prime"<<endl;
    }else{
        cout<<"this no is prime "<<endl;
    }
    return 0;

} 