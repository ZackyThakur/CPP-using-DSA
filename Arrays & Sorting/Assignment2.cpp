#include<iostream>
using namespace std;
int main()
{
    int n,evenSum =0, oddSum = 0;
    cin>>n;
    while (n!=0){
        if (n % 2 == 0){
            evenSum += n%10;
        }
        else {
            oddSum += n%10;
        }
        n = n/10;
    }
    cout<<oddSum<<" "<<evenSum<<endl;
}
