#include<iostream>
#include<climits>
using namespace std;
int findSecondLargest(int *input, int n)
{
    //Write your code here
    int i=0;
    int max = INT_MIN;
    int min = INT_MIN;
    for(i=0;i<n;i++){
        if(input[i]>max){
            int temp = input[i];
            min = max;
            max = temp;
        }
        else if (input[i]<max){
            if(input[i]>min){
                min = input[i];
            }
        }
    }
    return min;
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

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}
