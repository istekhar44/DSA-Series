#include <iostream>
using namespace std;
int main(){
    int num = 5;
    int *p= &num;

    double  d= 5;
    double *p= &d;

    char c= 'A';
    char *p= &c;
    

    char c = 'A';
    char* ptrChar = &c;

    //bool
    bool b = true;
    bool *p = &b;

    int num = 67;
    int *ptr = &num;

    float  a = 68 ;
    float *ptr = &a;
    cout <<"print the number"<<*ptr <<endl;

    string name = "hellow";
    string *ptr = &name;


    
    cout <<"print the value of num:"<<num<<endl;  // Print the value of the num
    cout <<"Adress of x"<<&num<<endl;             //Print the adress of the num

    //pointer varible in the denoted by ("&")
    //pointer store the address of the pointer
    cout <<"printing the address of the num"<<&num<<endl;
    return 0;

}

#include <iostream>
using namespace std;
int main(){
    int num = 5;
    int *ptr = &num;
    cout <<(num)++<<endl;

    
    
    cout<< num <<endl;
    cout <<"Address of the num:"<<ptr<<endl;

    cout <<"value of the num "<<*ptr<<endl;
    return 0;


}

