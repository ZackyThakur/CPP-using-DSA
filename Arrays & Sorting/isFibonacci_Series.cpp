#include<iostream>
using namespace std;
bool isFib(int n){
    int a =0;
    int b=1;
    int c;
    for(int i=0;i<=n;i++){
        c=a+b;
        if(c==n)
            return true;
        if(c>n)
            return false;
        a=b;
        b=c;
    }
    return isFib(n);
}
int main(){
    int n;
    cin>>n;
    if(isFib(n)){
        cout<<"True";
    }
    else
        cout<<"False";

}
