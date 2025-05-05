// A Linked List is a linear data structure used to store a sequence of elements, where each element (called a node) contains:
// Data – the value you want to store.
// Pointer (or Link) – a reference to the next node in the sequence.
// Unlike arrays, linked lists do not store elements in contiguous memory locations. Each node points to the next node, forming a chain



// | Operation | Description                     | Time Complexity |
// | --------- | ------------------------------- | --------------- |
// | Insertion | At beginning, middle, or end    | O(1) or O(n)    |
// | Deletion  | Remove a node                   | O(1) or O(n)    |
// | Traversal | Visit all nodes                 | O(n)            |
// | Searching | Find a node with specific value | O(n)            |


// 📌 Advantages of Linked List
// 1. Dynamic memory usage.
// 2. Easier to insert/delete elements without shifting.


// ❌ Disadvantages
// 1. More memory usage (extra pointer per node).
// 2. Slower access (no random access like arrays).


#include <iostream>
using namespace std;
// step 1 : Define a Node   :you can use the name of node as place of the node
class hellow{
    public:
    string value = "Istekhar ";
    hellow* next;

    //make the constructor to add the new node 
    Node (int data ){
        this -> data = data ;
        this ->next =Null;
    }
};

int main(){
       //ue the helloow as the place of the node 
    hellow*  node1 = new hellow();
    cout << node1-> value <<endl;
    cout<< node1-> next <<endl;

    return 0;

}

