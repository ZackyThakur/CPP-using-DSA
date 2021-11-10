#include<iostream>
#include<cstring>
using namespace std;
int main() {
    int a[100][100];
    int n,m;
    cin>>m>>n;
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Row Wise :"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Column Wise :"<<endl;
    for(j=0;j<n;j++){
        for(i=0;i<m;i++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
