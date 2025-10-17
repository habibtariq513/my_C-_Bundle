#include <iostream>
using namespace std;
int main()
{
    int arr[]= {10,20,40,90,0};
    int mx=INT_MIN;
    int Sec_mx=INT_MIN;
    int size_Of_Array=sizeof(arr)/sizeof(int);
    for(int i=1; i<size_Of_Array; i++)
    {
        if(arr[i] > mx)
        {
            mx=arr[i];
        }
    }
    for(int i=1; i<size_Of_Array; i++)
    {
        if(arr[i] > Sec_mx && arr[i]!=mx)
        {
            Sec_mx=arr[i];
        }
    }
    cout<<"the FIRST MAXIMUM number in the whole array = "<<mx<<endl;
    cout<<"the SECOND MAXIMUM number in the whole array = "<<Sec_mx<<endl;
    return 0;
}

