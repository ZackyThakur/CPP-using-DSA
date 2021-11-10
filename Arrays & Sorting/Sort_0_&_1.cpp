#include<iostream>
#include<climits>
using namespace std;
void bubbleSort(int *input, int n){
    for(int i=0;i<n;i++){
        for(int j =0;j<n-i-1;j++){
            if(input[j]>input[j+1])
                swap(input[j],input[j+1]);
        }
    }
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

		bubbleSort(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}
}
