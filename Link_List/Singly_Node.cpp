//   Singly Linked List – Theory
//   A Singly Linked List is a linear data structure in which elements, known as nodes, are connected sequentially using pointers. Each node contains two fields:
//   Data: The actual value or information stored in the node.
//   Next: A pointer to the next node in the sequence.
//   1.The first node is known as the head of the list.
//   2.The last node points to NULL, indicating the end of the list.


// print the simple node

#include <iostream>
using namespace std ;
class Node {
    public:
    int value ;
    Node* next ;
};
 int main (){
    Node* node1= new Node();
    cout<< "print node: "<<node1 << node1 -> value <<endl;
    cout<<node1 -> next<<endl;
    return 0;
 }

           //=Algorithm With Code 

Make the singly linked list 
#include <iostream>
using namespace std;
class Node {
    public :

    //int type linked list  : make the node 
    int data;
    Node* next ;


    //string type linked list : make the node 
    // string name ;
    // Node* next;

    //make the constructor to add the new node 
    Node (int data ){
        this -> next = data ;
        this -> null = Null;

    }
    

};

//insert the node at the head of the list 
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);  //create the temp node and make the head of the list 
    temp -> next = head;       //point the temp to head
    head =temp;            // temp ko head bol dia 
}


//insert the element at the tail of the Node 
void  insertAtTail(Node* &tail, int d){   //tail ma data insert kera dia 
    Node* temp = new Node(d);           //temp name ki new node bana di
    tail ->next = temp;           //temp ko next ko tail bana dia
    temp = tail -> next;
}




 void printLinkedList(Node* &head){    //print the list
    node *temp = head;                
    while (temp != Null){            // loop laga dia jab tak temp Null ka barabar nahi hota tab tak print ker
        cout<<temp ->data << " ";
        temp = temp ->next;          //temp ko next pa point kera dia

    }
    cout <<endl;
 }

int main(){
   // Create the first node
   Node* node1 = new Node(20);
   Node* head = node1;
   Node* tail = node1;

   printLinkedList(head);

   // Insert at head
   insertAtHead(head, 10);
   printLinkedList(head);

   // Insert at tail
   insertAtTail(tail, 30);
   printLinkedList(head);

   return 0;


}



//above Correct code 

#include <iostream>
using namespace std;

// Define the Node class
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize the node
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Insert a new node at the head of the list
void insertAtHead(Node*& head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Insert a new node at the tail of the list
void insertAtTail(Node*& tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// Print the linked list
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create the first node
    Node* node1 = new Node(20);
    Node* head = node1;
    Node* tail = node1;

    printLinkedList(head);

    // Insert at head
    insertAtHead(head, 10);
    printLinkedList(head);

    // Insert at tail
    insertAtTail(tail, 30);
    printLinkedList(head);

    return 0;
}