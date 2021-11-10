#include<iostream>
using namespace std;
int main(){
    int pv=1;
    int sum = 0;
    int n;
    cin>>n;
    while(n!=0){
        int rem = n%10;
        int result = rem*pv;
        n = n/10;
        sum = sum+ result;
        pv*=2;
    }
    cout<<sum;
}
