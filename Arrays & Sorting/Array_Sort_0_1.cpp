#include<iostream>
#include <algorithm>
using namespace std;
void sortZeroesAndOne(int *input, int size)
{
    int l =0;
    int r=size-1;
    while(l<r){
        while(input[l]==0 && l<r){
            l++;
        }
        while(input[r]==1 && l<r){
           r--;
        }
        int temp = input[r];
        input[r] = input[l];
        input[l] = temp;
        }
        l++;
        r++;
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

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}
