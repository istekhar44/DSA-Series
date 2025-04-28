#include<iostream>
using namespace std;
class student {
    public:
    string name ;
    float marks;
    int rollNo;
    char hellow;

};

int main(){
    student s1;
    s1.name = "istekharAlam";
    s1.marks = 88.7;
    // s1.rollNo = 43;
    cout <<"Enter the roll NO";
    cin >>s1.rollNo;

    s1.hellow = 'c';

    cout <<"Name "<<s1.name << "Marks" << s1.marks<<endl;





}