#include<iostream>
#include <deque>
//A deque (pronounced “deck”) is a container in C++ STL that allows insertion and deletion from both ends — front and back — efficiently.
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);  //d = [1]
    d.push_front(3);  // d = [3,1]

    //Use range-Based for loop (clear way )
    for(int i : d){
        cout<<i<<" ";
    }

}

