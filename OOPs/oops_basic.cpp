#include<iostream>
using namespace std;
//class 1
class student {
    public:
    string name ;
    float marks;
    int rollNo;
    char hellow;

};
//class 2
class car {
    public ;
    string brand;
    int price ;
    string type;

    


};

int main(){
    student s1;
    s1.name = "istekharAlam";
    s1.marks = 88.7;
    // s1.rollNo = 43;
    cout <<"Enter the roll NO";
    cin >>s1.rollNo;
    s1.hellow = 'c';

    car c1;
    c1.brand = "honda ";
    c1.price = 10000;
    c1.type = "luxery";
    

    cout <<"Name "<<s1.name << "Marks" << s1.marks<<endl;





}