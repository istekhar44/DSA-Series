/*#include<iostream>
using namespace std;
#define PI 3.14     //create the mecro 
int main(){
    int r = 5;
    //double pi = 3.14
    double area= PI *r *r;
    cout<<"area of the circle "<<area <<endl;
return 0;
}*/


//Calcululate the volume of the circle 
#include <iostream>
using namespace std ;
#define Pi 3.14
int main(){
    int r ;
    cout<<"Enter the radius :"<<endl;
    cin>>r;

    cout<<"Enter the height"<<endl;
    int h ;
    cin>>h;
    
    

    double area = Pi*r*r*h;
    cout<<"print the area:"<<area<<endl;
    return 0;
}