#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int *input = new int[n]; //Pointer input for heap memory which takes exact memory!
    for(int i=0;i<n;i++){
        cin>>input[i];
    }

    int max = -124526;
    for(int i =0;i<n;i++){
        if(max<input[i]){
            max = input[i];
        }
    }
    cout<<max;
    delete[] input; // In Heap memory have to delete manually !
    // STACK MEMORY :- Given on compile time which we use before Dynamic Allocation !
    // HEAP MEMORY :- Given on run time as it saves memory and have to delete in the end !
}
