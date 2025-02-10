#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int a = 0;
    int b = 1;

    cout << "Fibonacci sequence: ";
    for (int i = 1; i <= n; i++) {
        int nextnumber= a + b;
        cout << nextnumber << " ";
        a = b;
        b = nextnumber;
    }

    return 0; 
    int n;
    cin>>n;
    cout<<"enter the number "<<endl;
    for(int i=2; i<n; i++){
        for(n%i==0){
            cout<<" this no is not prime";
        }
        else{
            cout<<"this no is prime no";
            
        }
    }
   
   //For loop for prime no?
   int n;
   cin>>n;
   bool isPrime =1;
   for(int i =2; i<=n ; i++){
    if(n%i==0){
        //cout<<"not a prime no"<<endl;
        isPrime =0;
        break;
    }
   
   }
   if(isPrime ==0){
    cout<<"not a prime number"<<endl;
   }
   else{
    cout<<"is a prime no"<<endl;
   }
*/
// continue is used  for  skip the nextline .
int n;
cin>>n;
for(int i=0; i<=n; i++){
    cout<<"hii"<<endl;
    cout<<"Hellow"<<endl;
    continue;
    //continue statement skip ker data ha?
    cout<<"reply to ker da bhai"<<endl;

}
// question?
for(int i=0; i<5;i++){
    for(int j=i;j<=5;j++){
        cout<<i<<" "<<j<<endl;
    ;
}



   
}
}