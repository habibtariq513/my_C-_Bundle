#include <iostream>
using namespace std;
bool swapping(int arr[], int size)
{
	int i=0, j=size-1;
	while(i<j)
	{
		if(arr[i]!=arr[j])
		{
			return false;
		}
		i++;
		j--;
	}

	return true;

}
int main()
{
	int arr[]= {1,2,3,2};
	int size = sizeof(arr)/sizeof(int);

		if (swapping(arr, size))
		{
			cout<<"\nThis is Palindromic Array"<<" "<<endl;
		}
		else {
			cout<<"\nThis is NOT a Palindromic Array"<<" "<<endl;
		}

}
