#include<iostream>
using namespace std;
void update(int a){
    a = a + 10;
    cout << "inside the function" << a << endl;

}
int main(){
    int num =3;
    cout << " update the number" << num << endl ;
    update (num);  // pass by value
    cout <<" after the call execution" << num << endl ;
    return 0;

}