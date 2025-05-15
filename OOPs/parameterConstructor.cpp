#include<iostream>
using namespace std;
class Teacher{
    
    public:
    string name;
    string dept;
    int Salery;
    int id;
    int date;

    //method // memberfunction 
    void changeDept(string newDept){
        dept = newDept;
    }
     
   public:
    //Set the value for all the teacher 
    Teacher(){
        dept="Electronic and Communication Engineer\n"<<endl;
    }

 //access the private properties in the 
 void setSalery(double s){    // Edit the selary
   Salery= s;
 }

 void getSalery(int s){
    Salery = s           //access the private member 
 }
    
     ///making the constructor 
     Teacher(){
        cout<<"Hellow i am an constructor\n"<<endl;
     }


    private:
    string father ;
    int age;
    int salery;


};
class student{
    int name ;
    int age;
    //parametrised constructor 
    student(int  s, int n , string s,){
        name = mohit
    }



};
class bank{
    private:
    string account ;
    string username;
    double balance;
    string username
    public:

}

int main(){
    Teacher t1;
    t1.name="sunita";
    t1.dept="ECE";
    t1.salery=2000;

    cout<<"print name of teacher:"<<t1.name<<endl;
    Teacher t2;
    Teacher t3;


return 0;
}