#include<iostream>
using namespace std;
int main(){
    int n,i,j,k,x;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1-i;j++){
            cout<<j;
        }
        for(x=2;x<=i;x++){
            cout<<"**";
        }
        for(k=n+1-i;k>=1;k--){
            cout<<k;
        }
    cout<<endl;
    }
}
