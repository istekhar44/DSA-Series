// what is the set in the cpp?
// Key Properties of set:
// No duplicates – each element is unique.
// Automatically sorted (ascending by default).
// Based on a balanced binary search tree (usually a Red-Black Tree).
// Provides fast operations: O(log n) for insert, erase, and search.
#include <iostream>
#include <set>
using namespace std;
int main(){

    set<int>s;

     s.insert(1);
     s.insert(3);
     s.insert(4);
     s.insert(5);
     s.insert(6);
     s.insert(7);

     for(int  i : s ){
        cout << i << endl;
     }

     //erase the element upper of the index
     cout<<"Erase element uppper"<<endl;
     s.erase(s.begin());
     for(auto i : s ){
        cout << i << endl;
     }
     //check the element present or not
     cout<<endl;
     cout<<" is -5 present or not-->"<<s.count(-5)<<endl;

}
