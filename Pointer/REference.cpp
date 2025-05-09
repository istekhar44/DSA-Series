// Use of the post and the pre increment

/*#include<iostream>
using namespace std;
int main(){
    int i = 5;
    //crete the referance varible 
    int & j= i;
    cout<<i++<<endl;  //ans = 5   
    cout<<j--<<endl;  // ans =6    
    cout<<j++<<endl;  //ans = 5
    cout<<i<<endl;    //ans = 6
    
    

return 0;
}*/



 
/*#include<iostream>
using namespace std;

     //Create the referance varible fun  (Bad Practise)
int & fun(int a ){
    int num = a;
    int &ans = num;
    return ans;    
}
      //Create the refance varible    (Bad Practice)
int &update(int n){
    int a = n;             
    int &ans = a;
    return ans;
}

int main(){
    int a = 10;
    int &ref=a;  //creating the reference varible

    cout<<"Value Of A:"<<a <<endl;        // Output: 10
    cout<<"ref:"<<ref<<endl;      // Output: 10

    ref = 20; //Change the referance vaible
    cout<<"Upadate the ref varible:" <<ref<<endl;  //Output = 20
    cout<<"Update the Ref varible"<<a<<endl;  //Output = 20

    fun(a);



return 0;
}*/


#include<iostream>
using namespace std;
int main(){

    // int n;
    // cin>>n ;     (Bad Practice ) define the arr size on the compile time 
    // int arr[n];

    //Create the heap memory  use the keyword = new 
    new char;
    char * ch= new char;
    

     
return 0;
}


