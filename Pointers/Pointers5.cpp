#include<iostream>
using namespace std;
int main(){
    int *ptr = 0;
    int a = 10;
    cout<<*ptr<<" ";
    *ptr = a;
    cout << *ptr << endl;
}
