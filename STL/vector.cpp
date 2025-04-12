#include <iostream>
#include <vector>
using namespace std;
int main(){
   //initlized the vector declared the no of element 
   vector<int>(5,1);
   cout<<"print a"<<endl;
   for(int i:v){
    cout<<i<<" ";
   }

    //declared and initization
    vector<int> v;
    cout<<"size->"<<v.capacity()<<endl;

    //add the element of in the array
    v.push_back(1);
    cout<<"size->"<<v.capacity()<<endl;
    return 0;
}