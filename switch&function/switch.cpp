#include <iostream>
using namespace std;
int main(){
    char ch ='a';
    switch(ch){
        case 1: cout<<"first"<<endl;
         break;
        case 2: cout<<"second"<<endl;
         break;
        case 'a': cout<<"character"<<endl;
        break;
        char ch='b';
        switch(ch){
            case 'b' : cout<<"hellow app kone ha"<<endl;
        }
       // default:cout<<"It is the default"<<endl;

    }
    cout << endl;
    return 0;
}
