#include<iostream>
using namespace std;
int main(){

    int a = 100, b = 200;
    int *p = &a, *q = &b;
    cout<<p<<" "<<*p<<endl;
    p = q;

    cout<<p<<" "<<*p;
}
