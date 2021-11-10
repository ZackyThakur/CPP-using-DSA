#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[10];
    int large = INT_MIN;
    for (i =0; i<n; i++){
        cin>>a[i];
        if (large < a[i]){
            large = a[i];
        }
    }
    cout<<large;
}
