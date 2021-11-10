#include<iostream>
using namespace std;
int main(){
    int n,rem;
    cin>>n;
    long pv = 1, ans = 0;
    while (n!=0){
        rem = n%2;
        n/=2;
        ans = ans + rem*pv;
        pv = pv*10;
    }
    cout<<ans;
}
