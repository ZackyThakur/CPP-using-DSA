#include<iostream>
using namespace std;
int main(){

    double i = 12.3 ;
    double *p = &i;
    cout<<p<<" ";
    p=p+1;
    cout<<p;
}
