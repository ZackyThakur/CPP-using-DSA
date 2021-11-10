#include<iostream>
#include<cstring>
#include<climits>
using namespace std;
void findLargest(int **input,int nRows,int mCols){
    int i,j,maxSum1 = INT_MIN , maxSum2=INT_MIN;
    int idx1 =-1;
    int x=0;
    for(i=0;i<nRows;i++){
        int sum=0;
        for(j=0;j<mCols;j++){
            sum = sum + input[i][j];
        }
        if(sum>maxSum1){
            maxSum1=sum;
            sum=0;
        	idx1=i;
    	}
    }
	int idx2 =-1;
    for(j=0;j<mCols;j++){
        int sum=0;
        for(i=0;i<nRows;i++){
            sum= sum + input[i][j];
        }
        if(sum>maxSum2){
            maxSum2=sum;
            sum=0;
            idx2= j;
        }
    }
    if(maxSum1>maxSum2)
        cout<<"row"<<" "<<idx1<<" "<<maxSum1;
    else if(maxSum1<maxSum2)
        cout<<"column"<<" "<<idx2<<" "<<maxSum2;
    else
        cout<<"row"<<" "<<x<<" "<<maxSum1;

}

int main() {

    int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		findLargest(input,row,col);
		cout << endl;
	}

}
