#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int **input = new int*[m];
    for(int i =0;i<m;i++){
        input[i] = new int[n];
        for(int j = 0;j<n;j++){
            cin>>input[i][j];
        }
    }
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            cout<<input[i][j[<<" ";
        }
        cout<<endl;
    }
    //cout<<input[i][j]<<" ";
    for(int i =0;i<m;i++){
        delete [] input[i];
    }
    delete []input;
}
