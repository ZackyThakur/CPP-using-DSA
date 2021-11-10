#include <iostream>
using namespace std;
void wavePrint(int **input, int nRows, int mCols)
{
    //Write your code here
    int i,j;
    for(j=0;j<mCols;j++){
        if(j%2==0)
            for(i=0;i<nRows;i++){
                cout<<input[i][j]<<" ";
        }
        else if(j%2==1)
            for(i=nRows-1;i>=0;i--){
                cout<<input[i][j]<<" ";
        }
    }
}

int main()
{
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
		wavePrint(input, row, col);
		cout << endl;
	}
}
