#include<iostream>
using namespace std;
int main()
{
     int arr[]={1,2,3,4};
     int n=sizeof(arr)/sizeof(int);
     int ProductOfArray=1;
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
         ProductOfArray*=arr[i];
     }
     cout<<endl;
     cout<<"Product of array = "<<ProductOfArray;

}
