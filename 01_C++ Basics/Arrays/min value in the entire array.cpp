#include<climits>
#include <iostream>
using namespace std;
int main()
{
    int arr[]= {10,20,4,90,6};
    int mn=INT_MAX;
    int size_Of_Array=sizeof(arr)/sizeof(int);
    for(int i=0; i<size_Of_Array; i++)
    {
        if(arr[i] < mn)
        {
            mn=arr[i];
        }
    }
    cout<<"the MINIMUM number in the whole array = "<<mn;
    return 0;
}

