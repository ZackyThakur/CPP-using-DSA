#include <iostream>
using namespace std;
bool splitArray(int *arr, int n,int start, int lsum, int rsum){
    if(start==n){
        return lsum == rsum;
    }
    if(arr[start]%5==0){
        lsum +=arr[start];
    }
    else if(arr[start]%3==0){
        rsum +=arr[start];
    }
    else
        return splitArray(arr,n,start+1,lsum+arr[start],rsum)||splitArray(arr,n,start+1,lsum, rsum+arr[start]);
    return splitArray(arr,n,start+1,lsum,rsum);
}
int main(){
    int n;
    cin>>n;
    int *input = new int[n+1];
    for(int i=0; i<n; i++){
        cin>>input[i];
    }
    if(splitArray(input, n, 0,0,0)){
        cout<<"true"<<endl;
    }
    else
        cout<<"false"<<endl;
    return 0;
}
