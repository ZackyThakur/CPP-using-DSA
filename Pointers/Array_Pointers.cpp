#include<iostream>
using namespace std;
int main(){

   int a[6] = {1, 2, 3};
    cout << a << ' ' << &a<<endl;
    cout << (a + 2)<<" ";
    int *b = a;
    cout << b[2];
}
