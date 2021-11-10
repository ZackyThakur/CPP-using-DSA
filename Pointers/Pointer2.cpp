#include<iostream>
using namespace std;
int main(){

    int i = 10;
    int *p = &i;
    i++;
    ++*p;
    int x = i;
    ++x;
    cout<<i<< " "<<p<<" "<<*p<<" "<<x;;
}
