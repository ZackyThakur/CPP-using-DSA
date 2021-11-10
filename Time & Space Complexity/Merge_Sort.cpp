#include <iostream>
using namespace std;
void merge(int *arr, int s, int m, int e){
    int i =s;
    int j =m+1;
    int k =0;
    int temp[e-s+1];
    while(i<=m && j<=e){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else
            temp[k++] = arr[j++];

    }
    while(i<=m){
        temp[k++]=arr[i++];
    }
    while(j<=e){
        temp[k++]=arr[j++];
    }
    k=0;
    for(int x=s;x<=e;x++){
        arr[x]=temp[k++];
    }
}
void mergeSort(int *arr, int s, int e){
    if(s>=e){
        return;
    }
    int m = (s+e)/2;
    mergeSort(arr, s, m);
    mergeSort(arr, m+1, e);
    merge(arr, s, m, e);
}
int main(){
    int n;
    cin>>n;
    int *input = new int[n];
    for(int i =0;i<n;i++){
        cin>>input[i];
    }
    mergeSort(input, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    return 0;
}
