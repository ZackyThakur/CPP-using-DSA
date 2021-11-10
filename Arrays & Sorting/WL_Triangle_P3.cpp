#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int n , i = 1;
   cin>>n;
   while(i<=n){
    int j = 1;
    int x = i;
    while(j<=i){
        cout<<x;
        j++;
        x++;
    }
    cout<<endl;
    i++;
   }
}
