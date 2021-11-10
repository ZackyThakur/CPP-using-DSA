#include<iostream>
#include<cstring>
#include<climits>
using namespace std;
void spiralPrint(int **input,int lr, int lc){
    int i,sr=0,sc=0;
    while(sr<lr &&sc<lc){
        for(i=sc;i<lc;i++){
            cout<<input[sr][i]<<" ";
        }sr++;
        for(i=sr;i<lr;i++){
            cout<<input[i][lc-1]<<" ";
        }lc--;
        for(i=lc-1;i>=sc;i--){
            cout<<input[lr-1][i]<<" ";
        }lr--;
        for(i=lr-1;i>=sr;i--){
            cout<<input[i][sc]<<" ";
        }sc++;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int r,c;
        cin>>r>>c;
        int **matrix = new int*[r];
        for(int i =0;i<r;i++){
            matrix[i]= new int[c];
            for(int j=0;j<c;j++){
                cin>>matrix[i][j];
            }
        }
        spiralPrint(matrix,r,c);
            for (int i = 0; i < r; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}
