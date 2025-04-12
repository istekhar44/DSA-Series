#include <iostream> 
#include <queue>
using namespace std;
int main(){
    queue<string>q;
    q.push("love ");
    q.push("babbar");
    q.push ("hellow");

    cout << "first element " << q.front()<<endl;
    q.pop();

    cout <<"  elemnt after pop "<< q.front()<<endl;

}