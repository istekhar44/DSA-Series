/*#include<iostream>
using namespace std;
class student {
    public :
    student(string n, int a, int r, int c){
        name = n;
        age = a;
        roll = r;
        class = c;
    }

    void display(){
        cout<<"Name"<< name<< "Age"<<age<<"Roll"<<roll<<endl;
    }


};
int main(){
    //pass multiple argument to the constriuctor 
    student s1("mohit", 20, 042,);
    //print the student 1 info 
    s1.display();
return 0;
}*/







    // Program 2   making the copy constructor

/* #include<iostream>
using namespace std;
class student {
    public :
    student(string name, int age, int roll, int class){
        this->name = n;
        this->age = a;
        this->roll = r;
        this->class = c;
    }
         
      //making the copy constructor
      student(student &or)


    void display(){
        cout<<"Name"<< name<< "Age"<<age<<"Roll"<<roll<<endl;
    }


};
int main(){
    //pass multiple argument to the constriuctor 
    student s1("mohit", 20, 042,);
    //print the student 1 info 
    s1.display();
return 0;  */   



#include<iostream>
using namespace std;
class human{
    public :
    int height;
    int age ;
    int Weight;

    public:
    int getAge(){
        return-> age
    }
   void setWeight(){
        this-> weight = w;
    }

};
class male: public human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
};
int main(){
    male object1;
    object1.age= 34;
    cout<<"print the age:"<<object1.age<<endl;
    cout<<object1.age<<endl;
    cout<<object1.height<<endl;
return 0;
}
#include<iostream>
using namespace std;
int main(){
    cout<<"my name id khan "<<endl;
return 0;
}
