#include<iostream>
#include<climits>
using namespace std;

int findSecondLargest(int *input, int n){
    int mAx = INT_MIN;
    int mIn = INT_MIN;
    int i;
    for(i=0;i<n;i++){
        if(input[i]>mAx){
            mIn = mAx;
            mAx = input[i];
        }
        else if (input[i]<mAx)
             if(input[i]>mIn)
                 mIn = input[i];
    }
    return mIn;
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
