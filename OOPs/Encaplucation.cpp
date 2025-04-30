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

   public :
    string fatherName;
    string gender;
    int FatherAge;
      
      //setter for name 
    void setName(string name){
        this->Name = name;
     }

       //getter for name 
    string  getName(){
         return Name;
     }

    

};
int main(){
    // create the boject 
    student s1;

    //set public properties 
    s1.fatherName = "Mohit Mehra";
    s1.gender = "male";
    cout <<"Print the name of student: "<<" " <<s1.fatherName<<endl;

    //set and get private property using method 
    s1.setName("karanMehra");
    cout <<"print the name of student :"<<" " <<s1.getName()<<endl;

    //print public properties 
    cout <<"father Name "<< s1.fatherName<<endl;
    
   

return 0;
}
