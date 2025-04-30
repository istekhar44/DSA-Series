// Data is kept private inside a class.
// Access to the data is given through public methods (getters/setters).
// It helps in protecting data from unauthorized access or modification.
// Encourages modular and maintainable code.

#include<iostream>
using namespace std;
class student{

    private :
    string Name ;
    int Age ;
    float Marks;

    void setName(string name){
        Name = name;
    }

    getName(){
        return Name;
    }

    public :
    string fatherName;
    string gender;
    int FatherAge;

    

};
int main(){
    // Print the public properties
    student s1;
    s1.fatherName = "Mohit Mehra";
    cout <<"Print the name of student: "<<" " <<s1.fatherName<<endl;

    //Print the private property
    student s2;
    setName("karanMehra");
    // cout<<"print the set name "<<setName()<<endl;


    cout<<"print the set name "<<getName()<<endl;


return 0;
}
