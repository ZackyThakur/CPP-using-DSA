#include<iostream>
using namespace std;
int main()
{
    int n,i=1,j;
    cin>>n;
    while(i<=n){
        int spaces = 1;
        int var = 1;
        while (spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        j = 1;
        while (j<=i){
            cout<<var;
            var++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
