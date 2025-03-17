#include<iostream>
using namespace std;
class Node {
    public:
    int value ;
    Node *next;
     
    //constructor
    class Node( int data ){
        value = data;
        next = NULL;

    }

};
void insertAtHead()

int main(){
    Node *n = new Node(7);
    cout<< n-> value <<" " << n->next <<endl;
return 0;
}