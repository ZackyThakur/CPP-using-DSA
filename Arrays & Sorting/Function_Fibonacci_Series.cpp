#include<iostream>
using namespace std;
int fibSeries(int n){
    int i = 2;
    int a = 0;
    int b = 1;
    int c;
    if (n==0){
        return a ;
    }
    while(i<=n){
        int c= a + b;
        a = b;
        b = c;
        i++;
    }
    return b;
}
int main(){
    int n;
    cin>>n;
    cout<<fibSeries(n);
}

