#include<iostream>
using namespace std;
int missingArr(int arr[], int n){
    int sumTotal = ((n+2)*(n+1))/2;
    //int sum = 0;
    for(int i =0; i<n; i++){
        sumTotal -= arr[i];
    }
    return sumTotal;
}
int main(){
    int n;
    cin>>n;
    int *arr = new int(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int miss = missingArr(arr, n);
    cout<<miss;
    delete[] arr;
}
