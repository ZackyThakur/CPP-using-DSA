#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y,i=1, result, sum =0;
    cin>>x;
    cin>>y;
    while (i<=y){
        result = x*x;
        sum +=result;
        i++;
    }
    cout<<sum;

}
