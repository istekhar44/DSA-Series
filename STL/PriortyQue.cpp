//what is the priorty queue?
//A priority queue is a special type of queue in which each element has a priority, and elements are served based on their priority—not just the order they arrive.
#include <iostream>
#include <queue>
using namespace std;
int main(){

    priority_queue<int>maxi;

    priority_queue<int>mini;
    maxi.push(1);
    maxi.push(2);
    maxi.push(4);
    maxi.push(9);
    maxi.push(67);
    maxi.push(56);

    for(int i= 1; i<=maxi.size(); i++ ){
        cout << maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

//push the mini element in the 
   mini.push(1);
   mini.push(2);
   mini.push(4);
   mini.push(9);
   mini.push(67);
   mini.push(56);

   for(int i =0 ; i<=mini.size() ; i++){
    cout<<mini.top()<<" ";
    mini.pop();

   }cout<<endl;

}