#include<iostream>
using namespace std;

int main() {
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        int spaces;
        for(spaces=1;spaces<=n-i;spaces++){
            cout<<" ";}
        int j;
        for(j=i;j>=1;j--){
            cout<<j;
        }
        int k;
        for(k = 2;k<=i;k++){
            cout<<k;
        }
        cout<<endl;

    }
}
