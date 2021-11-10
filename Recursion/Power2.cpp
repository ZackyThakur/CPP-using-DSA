#include<iostream>
//#include<string>
using namespace std;
int power(int x, int n){
    if(n==0){
        return 1;
    }
    return  x * power(x,n-1);
    //return smallAns;
}
int main(){
    int x,n;
    cin>>x>>n;
    cout<<power(x,n)<<endl;
}
