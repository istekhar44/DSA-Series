// Sieve of Eratosthenes 
//enter the no of series and check how many no the no is prime orn or not 
// Algorithm 
// 1. Mark every no are as a  prime  
// 2. Table across the prime no 
#include <iostream>
#include <vector>
using namespace std;
void sieveOfEratostheses(int n){
    //step 1. create a boolean array "is prime "
    vector<bool> isPrime(n+1, true);

    //step 2. 0 and 1 are not prime 
    isPrime[0] = isPrime[1] = false;

    //step 3. start from 2 up to n
    for(int p = 2; p<= n ; p++){
       if (isPrime[p]){
        //step 4. Mark all Multiple of i as false 
        for (int i = p*p ; i<= n ; i+=p){
            isPrime[i]=false;
        }

       } 
    }
}

//print all the prime no 
cout <<"Prime numbers up to "<< n << "are ";
for(int i = 2 ; i<= n ; i++){
    is(isPrime[i]){
        cout << i << " ";
    }
    cout<< endl;
}

int main(){
    int n = 50;
    seieveOfEratosthenses(n);
    return 0;
}
