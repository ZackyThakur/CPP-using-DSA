#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int i =1;
    while (i <= n){
        int k = 1;
        while (k <=n-i){
            cout<<" ";
            k++;
        }
        int j = 1;
        int num = 1;
        while (j <= i){
            cout<<"*";
            num ++;
            j ++;
        }
        cout<<endl;
        i ++;
    }
}
