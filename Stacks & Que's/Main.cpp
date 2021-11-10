#include<iostream>
using namespace std;
#include "A.Demo.cpp"

int main(){
    Stack<char> s;
    s.push(100);
    s.push(120);
    s.push(103);
    s.push(104);
    s.push(105);

    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.getSize()<<endl;
    cout<<s.isEmpty()<<endl;

}
