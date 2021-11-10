#include<iostream>
using namespace std;
int findUnique(int*arr, int n){
    int result = arr[0];
    for(int i =1;i<n;i++){
        result = result^arr[i];
    }
    return result;
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
        cout<<findUnique(input, n)<<endl;
    }
    return 0;
}
