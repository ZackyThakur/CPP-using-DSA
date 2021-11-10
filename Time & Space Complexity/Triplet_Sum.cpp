#include<iostream>
#include<algorithm>
using namespace std;
int pairSum(int *arr, int start, int end, int num)
{
    int count =0;
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
int tripletSum(int *arr, int n, int num){
    sort(arr, arr+n);
    int ans =0;
    for(int i =0;i<n;i++){
        ans += pairSum(arr , i+1, n-1, num-arr[i]);
    }
    return ans;
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

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}
