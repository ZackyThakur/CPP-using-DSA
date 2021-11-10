#include<iostream>
using namespace std;
void mergeSort1(int input[],int si,int mid,int ei){
    int i = si,j = mid+1;
    int k =0, temp[ei-si+1];
    while(i<=mid && j<=ei){
        if(input[i]>input[j]){
            temp[k++]=input[j++];
        }
        else
            temp[k++]=input[i++];
    }
    while(i <= mid){
        temp[k++]= input[i++];
    }
    while(j <= ei){
        temp[k++]= input[j++];
    }
    k=0;
    for(int x = si;x<=ei;x++){
        input[x]= temp[k++];
    }
}
void helper(int input[],int si,int ei){
    if(si>=ei){
        return ;
    }
    int mid = (si+ei)/2;
    helper(input,si,mid);
    helper(input,mid+1,ei);
    mergeSort1(input,si,mid,ei);
}

void mergesort(int input[], int n){
    helper(input,0,n-1);
}
void intersection(int *arr1, int *arr2, int n, int m)
{
    //Write your code here
    mergesort(arr1, n);
    mergesort(arr2, m);
    int i =0,j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
    }
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size1, size2;

		cin >> size1;
		int *input1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> input1[i];
		}

		cin >> size2;
		int *input2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> input2[i];
		}

		intersection(input1, input2, size1, size2);

		delete[] input1;
		delete[] input2;

		cout << endl;
	}

	return 0;
}
