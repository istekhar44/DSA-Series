//solve the question of the gdc 
//Question => gdc(a,b)= gdc (a-b,b) prove.
#include <iostream>
using namespace std;
int  gcd(int a, int b ){
    if(a == 0){
        return b;
    }
        
    
    if (b == 0){
        return a;
    }
       
    
    while (a != b){
        if(a> b){
            a= a-b ;
        }
        if (b>a){
            b = b-a ;
        }
    }
    return a;


}
int main(){
    int a, b;
     a= 20;
     b= 40;

     int ans = gcd(a,b);

     cout << "answer of the gcd"<< ans<<a<< b<<endl;
     return 0;
     

}
