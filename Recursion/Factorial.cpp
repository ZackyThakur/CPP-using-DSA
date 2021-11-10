#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int x = factorial(n-1);
    return x*n;
}
int main(){
    int n;
    cin>>n;
    int output = factorial(n);
    cout<< output<<endl;
}

