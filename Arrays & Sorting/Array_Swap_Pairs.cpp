#include <iostream>
using namespace std;
void swapAlternate(int *arr, int size)
{
    int i=0, j = 1, x = 0;
    while(x<size/2){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i=i+2;
        j=j+2;
        x++;
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
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
}
