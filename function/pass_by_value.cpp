#include<iostream>
using namespace std;

// Pass By value 
 
//Question 1

void update(int a){
    a=a/2;
}
int main(){
    int a = 10;
    update (a);
    cout<< a<< endl;
}


//Queation 2?

int update (int a ){
    a -=5;
    return a;

} 
int main(){
    int a =15;
    update (a);
    cout << a<<endl;

}
