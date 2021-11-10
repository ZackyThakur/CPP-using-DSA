#include <iostream>
using namespace std;
void printArray(int input[], int n)
{
    int i;
    for(i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}

int main()
{
		/*int n;
		cin >> n;*/
		int input[10] = {1,2,3,9};
		/*for(int i =0; i<n;i++){
            cin>>input[i];
		}*/
		printArray(input, 10);

	}
