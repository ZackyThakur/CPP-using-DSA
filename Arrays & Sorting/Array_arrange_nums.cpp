#include <iostream>
using namespace std;
void arrange(int *arr, int n)
{
    int start =0, end = n-1;
    for (int i = 1; i<=n; i++){
        if(i%2==1){
            arr[start]=i;
            start++;
        }
        else {
            arr[end]=i;
            end--;
        }
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}


}
