#include<iostream>
using namespace std;
int main()
{
    int n,i=1,j;
    cin>>n;
    while(i<=n){
        int spaces = 1;
        while (spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        j = 1;
        while (j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}
