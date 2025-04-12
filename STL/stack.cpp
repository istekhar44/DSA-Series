// A stack is a Last In, First Out (LIFO) data structure. This means the last element added is the first one to be removed.
#include <iostream> 
#include <stack>
using namespace std;
int main (){
    stack<string>s;

    s.push(" hellow ");
    s.push("babbar ");
    s.push("DSA ");
    
    cout << " Top Element " << s.top()<< endl;
    s.pop();

    cout << " After the pop"<< endl;
    
    cout << "top element " << s.top()<<endl;

} 
