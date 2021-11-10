#include<iostream>
#include<algorithm>
using namespace std;
void swapElmt(int *input, int i, int j ){
    int temp = input[i];
    input[i] = input[j];
    input[j] = temp;
}
void reverse(int *input, int i, int j){
    while(i<j){
        swapElmt(input, i, j);
        i++;
        j--;
    }
}
void rotate(int *input, int d, int n){
    if(n==0){
        return;
    }
    else if(d>=n & n!=0){
        d= d % n;
    }
    reverse(input, 0, n-1);
    reverse(input, 0, n-d-1);
    reverse(input, n-d, n-1);
}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}

	return 0;
}
