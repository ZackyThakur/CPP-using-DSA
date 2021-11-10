#include<iostream>
using namespace std;
bool isPrime(int n){
    int d = 2;
    while(d<=n/2){
        if ( n % d==0){
            return false;
        }
        d++;
    }
    return true ;
}

int main(){
    int n,x;
    cin>>n;
    for(x=2;x<=n;x++){
        if(isPrime(x)){
            cout<<x<<endl;
        }
    }
}
