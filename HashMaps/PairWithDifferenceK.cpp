#include <iostream>
using namespace std;
#include <unordered_map>

int getPairsWithDifferenceK(int *input, int n, int k){
	unordered_map<int,int> freq;
	int paircount=0;
	for(int i=0;i<n;i++){
        int complement=input[i]+k;
        paircount+=freq[complement];
    	if(k!=0){
            complement=input[i]-k;
            paircount+=freq[complement];
    	}
    	++freq[input[i]];
    }
    return paircount;
}

int main() {
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int k;
    cin >> k;

    cout << getPairsWithDifferenceK(input, n, k);

    delete[] input;
}
