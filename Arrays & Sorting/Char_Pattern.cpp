#include<iostream>
using namespace std;
int main()
{
    int n,i=1,j;
    cin>>n;
    while(i<=n){
        j = 1;
        while(j<=n){
            char ch = 'A' + j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}
