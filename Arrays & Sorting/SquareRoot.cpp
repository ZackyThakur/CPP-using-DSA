#include<iostream>
using namespace std;
int main(){
    int n,i=1,result=1;
    int sqrRoot;
    cin>>n;
    while(result<=n){
        i++;
        result= i*i;
    }
    sqrRoot = i-1;
    cout<<sqrRoot;
}
