#include <iostream>
#include <list>
// A list is a doubly linked list:
// Each element points to both the previous and the next one.
// Unlike arrays or vectors, it doesn't store elements in contiguous memory.
using namespace std;

int main (){
    list<int> l;

    // // Copy the list element 
    // list <int > n (5, 100);
    // for (int i : l){
    //     cout << " print the new list "<< endl;
    //     cout << i << " " ; 
    // }cout << endl;

    l.push_back(1);  // l = [1]
    l.push_front(5);  // l = [ 5 , 1 ]

    for(int i : l){
        cout<< i<< " ";
    }
    cout<< endl;

    l.erase (l.begin());
    cout<<"after erase "<<endl;
    for( int i : l){
        cout << i <<" " ;
    }
    cout << "size of list "<<l.size()<<endl;


}