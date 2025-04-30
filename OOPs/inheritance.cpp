// 🔷 What is Inheritance in C++?
// Inheritance is a feature in object-oriented programming that allows a class (child/derived class) to inherit properties and behaviors (members and methods) from another class (parent/base class).
// It promotes code reusability, extensibility, and logical hierarchy between classes.
#include <iostream>
using namespace std;
class human{
    public:
    int age ;
    int weight ;
    int height;


public :
    int getweight(){
        return this->weight ;

    }
    void setweight(int w){
        this->weight = w;

    }

};

class male : public human{
    public :
    string color;

    void sleep(){
        cout << "male sleping "<<endl;
    }
};
int main(){
    male object1 ;
    cout << object1.age<<endl;
    cout << object1.weight<<endl;
    cout <<object1.height<<endl;

    
    return 0;

}