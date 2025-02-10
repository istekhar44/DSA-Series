#include <iostream>
using namespace std;
int main(){
    int a,b;

    // Power of a to the b?

    cout<<"enter the value of a "<<endl;
    cin>>a;

    cout<<"enter the value of b "<<endl;
    cin>>b;
    
    int ans =1;
    for(int i=1; i<=b; i++){
        //int ans;
        ans=ans*a;
    }
    cout<<"Aswer is"<<ans<<endl;
    return 0;
}
