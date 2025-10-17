#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,40,90,35};
    int mx = -1;
    int mn=INT_MAX;
    int size_Of_Array = sizeof(arr)/sizeof(int);
    for(int i=1; i<size_Of_Array; i++)
    {
        if(arr[i] > mx)
        {
            mx=arr[i];
        }
    }
    cout<<"MAXIMUM number = "<< mx << endl;

    for(int i=0; i<size_Of_Array; i++)
    {
        if(arr[i] < mn)
        {
            mn=arr[i];
        }
    }
    cout<<"MINIMUM number = "<<mn << endl;

    return 0;
}

