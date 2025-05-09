#include<iostream>
using namespace std;
int main(){
    int i = 5;
    //crete the referance varible 
    int & j= i;
    cout<<i++<<endl;  //ans = 5   
    cout<<j--<<endl;  // ans =6    
    cout<<j++<<endl;  //ans = 5
    cout<<i<<endl;    //ans = 6
    

return 0;
}