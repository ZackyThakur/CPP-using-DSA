#include<iostream>
using namespace std;
void rotate(int *input, int d, int n)
{
    //Write your code here 1 4 3 2 5
    int i =0,j=n-1;
    while(i<j){
        int temp = input[i];
        input[i++] = input[j];
        input[j--] = temp;

    }
    /*
    int k = n-d-1;
    i=0;
    while(i<k){
        int temp = input[i];
        input[i++] = input[k];
        input[k--] = temp;
    }
    int y = n-d;
    int z = n-1;
    while(y<z){
        int temp = input[y];
        input[y++] = input[z];
        input[z--] = temp;
}*/
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
