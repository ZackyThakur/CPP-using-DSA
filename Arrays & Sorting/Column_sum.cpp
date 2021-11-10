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
    int sum=0;
    cout<<"Column Wise :"<<endl;
    for(j=0;j<n;j++){
        for(i=0;i<m;i++){
            sum = sum + a[i][j];
        }
        cout<<sum<<" ";
        sum =0;
    }
}
