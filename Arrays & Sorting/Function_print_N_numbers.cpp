#include<iostream>
using namespace std;

void numbers1_TO_N(int n){
    int i = 1;
    while(i<=n){
        cout<<i<<endl;
        i++;
    }
}
int main(){
    int n ;
    cin>>n;
    numbers1_TO_N(n);
}
