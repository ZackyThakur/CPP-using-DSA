#include <iostream>
using namespace std;

int arrayRotateCheck(int *arr, int size)
{
    //Write your code here
    int minIndex;
    int min = arr[0];
    for(int i =0;i<size;i++){
        if(arr[i] < min){
            min = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}

	return 0;
}
