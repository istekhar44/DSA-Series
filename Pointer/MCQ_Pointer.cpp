#include<iostream>
using namespace std;
int main(){
/*    int first =16;
    int *p =&first;
    int *q = p;
    (*q)++;
    cout <<first <<endl;
    //Ans = 17


    int first = 8;
    int *p = &first ;
    cout<<(*p)++<<" ";       // post increment first print and then increment
    cout <<first <<endl;
    //Ans 8   9*/

/*    int *p = 0;
    int first = 110;
    *p= first;
    cout<<*p<<endl;
    //Ans = error in the code write  correct ans : int *p = &first;
    */


    int first = 8;
    int second = 12;
    int * third = &second;
    int** fourth = &third ;
    first = *third;
    *third = *third +2 ;
    cout <<first <<" " <<second <<endl;







return 0;
}