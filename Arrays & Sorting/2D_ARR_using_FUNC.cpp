#include<iostream>
#include<cstring>
using namespace std;
void print2DArr(int a[][5],int m,int n){
    int i,j;
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
int main() {
    //MAnually
    int a[5][5]={{1,1,1},{2,2}};

    /*
    int a[100][100];
    int n,m;
    cin>>m>>n;
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }*/
    print2DArr(a,5,5);
}
