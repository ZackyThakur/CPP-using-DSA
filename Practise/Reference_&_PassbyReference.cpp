#include<iostream>
using namespace std;
int f(int &a){
    a = a+5;
    return a;
}
int main(){

    int i = 10;
    f(i);
    cout<<i;
}
