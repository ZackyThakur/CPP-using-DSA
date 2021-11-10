#include<iostream>
using namespace std;
int findDuplicate(int*arr, int n){
    int sum = 0;
    int res = (( n - 2 ) * ( n - 1)) / 2;
    for (int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum - res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *input = new int[n];
        for(int i =0;i<n;i++){
            cin>>input[i];
        }
        cout<<findDuplicate(input, n)<<endl;
    }
    return 0;
}
