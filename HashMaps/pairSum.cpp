#include<iostream>
using namespace std;
#include<unordered_map>

int pairSum(int * arr, int n){
    unordered_map<int, int> freq;
    int count = 0;
    for(int i =0; i<n; i++){
        int x = -arr[i];
        if(freq.find(arr[i]) != freq.end()){
            count += freq[x];
        }
        ++freq[arr[i]];
    }
    return count;

}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i =0; i<n; ++i){
        cin>>arr[i];
    }
    cout<<pairSum(arr, n);
    delete [] arr;
}
