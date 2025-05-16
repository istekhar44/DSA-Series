#include <iostream>
using namespace std;

class Rectangle {
    // Data members
    int length;
    int breadth;

public:
    // Member function to set values
    void setValues(int l, int b) {
        length = l;
        breadth = b;
    }

    // Member function to calculate area
    int area() {
        return length * breadth;
    }

    // Member function to display dimensions
    void display() {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }
};

int main() {
    Rectangle rect;

    rect.setValues(10, 5);
    rect.display();
    cout << "Area: " << rect.area() << endl;

    return 0;
}
#include<iostream>
using namespace std;
int main(){
return 0;
}