#include <iostream>
using namespace std;
void spiralPrint(int **input, int nRows, int mCols)
{
    int i,sRows =0,sCols =0; //ending rows = nRows / ending cols = mCols;
    while(sRows<nRows && sCols < mCols){
        for(i=sCols;i<mCols;++i){
            cout<<input[sRows][i]<<" ";
        }
        sRows++;
        for(i=sRows;i<nRows;++i){
            cout<<input[i][mCols-1]<<" ";
        }
        mCols--;
        for(i=mCols-1;i>=sCols;--i){
            cout<<input[nRows-1][i]<<" ";
        }
        nRows--;
        for(i=nRows-1;i>=sRows;--i){
            cout<<input[i][sCols]<<" ";
        }
        sCols++;
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
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}
