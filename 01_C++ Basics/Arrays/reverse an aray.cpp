#include <iostream>
using namespace std;
int main()
{
    int i, n, product=1;
    cout<<"enter n = ";
    cin>>n;
    int arr[n], arr2[n];
    int size_of_arr = sizeof(arr)/sizeof(int);
    for(i=n-1; i>=0; i--)
    {
        cin>>arr[i];//Taking input in arrays
        arr2[i]=arr[i];
    }

    cout<<endl;
    cout<<"the copied array = {";
    for( i=0; i<size_of_arr; i++)
    {
        cout<<arr2[i]<<" ";
        product*=arr2[i];

    }
    cout<<"}";
    cout<<endl;
    cout<<"Product of an array = "<<product;
    return 0;
}
