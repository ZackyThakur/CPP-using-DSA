#include<iostream>
#include<cstring>
using namespace std;
void print2Darray(int **input, int row, int col) {
	// Write your code here
	int n = row;
	int i,j,len;
	for(i=0;i<row;i++){
        for(len=n;len>0;len--){
            for(j=0;j<col;j++){
                cout<<input[i][j]<<' ';
            }
            cout<<endl;
        }
        n--;
	}
}
int main(){
    int row, col;
    cin>>row>>col;
    int **input = new int*[row];
    for(int i=0;i<row;i++){
        input[i]=new int[col];
        for(int j=0;j<col;j++){
            cin>>input[i][j];
        }
    }
    print2Darray(input,row,col);
}
