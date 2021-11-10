#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int i= 1, j =1, k =1;
    while (i<=n){
           int var = 1;
        while (k<=n-i){
            cout<<" ";
            k++;
        }
        k =1;
        while (j <= 2*i-1){
            cout<<var;
            var++;
            j++;
        }
        j =1;
        cout<<endl;
        i++;
    }
}
