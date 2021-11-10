#include<iostream>
using namespace std;
void selectionSort(int input[], int n){
    for(int i =0;i<n-1;i++){
        int min = input[i] , minIndex = i;
        for(int j = i+1;j<n;j++){
            if(input[j]< min){
                min = input[j];
                minIndex = j;
            }
        }
        int temp = input[i];
        input[i] = input[minIndex];
        input[minIndex,] = temp;
    }
}

int main(){
    int n ;
    cin>>n;
    int *input = new int[n];
    for (int i =0; i<n;i++){
        cin>>input[i];
    }
    selectionSort(input, n);
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
}
