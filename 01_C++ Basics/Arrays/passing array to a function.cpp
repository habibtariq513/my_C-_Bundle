#include<iostream>
using namespace std;
int passingArr(int arr[], int n, int size)
{
    int array[n];
    for(int i=1; i<size; i++)
    {
        cin>>array[i];
        cout<<endl;
    }
    cout<<endl;
    for(int i=1; i<size; i++)
    {
        cout<<array[i]<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter no. of elements  = ";
    cin>>n;
    int arr[n];
    int size=sizeof(arr)/sizeof(int);
    passingArr(arr, n, size);







}



