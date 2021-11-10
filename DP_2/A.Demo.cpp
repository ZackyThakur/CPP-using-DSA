#include <iostream>
#include<climits>
using namespace std;

int minCostPath(int** input, int m, int n, int i, int j){
    if(i == m-1 && j == n-1){
        return input[i][j];
    }
    if(i >= m || j >= n){
        return INT_MAX;
    }


    int x = minCostPath(input, m, n, i, j+1 );
    int y = minCostPath(input, m, n, i+1, j+1);
    int z = minCostPath(input, m, n, i+1, j );

    int ans = min(x, min(y, z)) + input[i][j];
    return ans;
}

int main(){
    int m,n;
    cin>>m>>n;

    int ** input = new int*[m];
    for(int i =0; i<m ; i++){
        input[i] = new int[n];

        for(int j =0; j <=n; j++){
            cin>>input[i][j];
        }
    }
    cout<<minCostPath(input, m, n, 0, 0)<<endl;
}
