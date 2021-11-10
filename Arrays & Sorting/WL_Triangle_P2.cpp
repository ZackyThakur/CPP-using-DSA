#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int n , i = 1;
   cin>>n;
   int var = 1;
   while(i<=n){
    int j = 1;
    while(j<=i){
        cout<<var;
        var++;
        j++;

    }
    cout<<endl;
    i++;
   }
}
