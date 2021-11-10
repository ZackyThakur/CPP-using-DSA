#include<iostream>
#include<algorithm>
using namespace std;
int pairSum(int *arr, int n, int num)
{
	//Write your code here
    sort(arr, arr+n);
    int count =0;
    int start =0, end = n-1;
    while( start < end){
        if(arr[start] + arr[end] > num){
            end--;
        }
        else if(arr[start] + arr[end] < num){
            start++;
        }
        else {
            int startElmt = arr[start];
            int endElmt = arr[end];
            if(arr[start] == arr[end]){
                int totalElmt = end-start+1;
                count += (totalElmt * (totalElmt -1)) / 2;
                return count;
            }
            int si =0;
            int ei =0;
            while(arr[start] == startElmt){
                start++;
                si++;
            }
            while(arr[end] == endElmt){
                end--;
                ei++;
            }
            count += si * ei;
        }
    }
    return count;
}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}
