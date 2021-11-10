#include <iostream>
using namespace std;
void printArray(int array[], int n){
    int i;
    for(i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void reverse(int array[], int n)
{
    int i = 0;
    int j = n-1;
    while(i<j){
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
    i++;
    j--;
}
}

int main()
{
    int array[10];
    for(int i =0; i<6;i++){
        cin>>array[i];
    }
    reverse(array,6);
    printArray(array,6);
}
