#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int arrSum[];
    int sum = 0;
    for(i=0; i<n; i++){
        cin>>arrSum[i];
        sum = sum + arrSum[i];
    }
    cout<<sum;
}
