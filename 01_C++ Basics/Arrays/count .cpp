#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,4,7,8,3,6};
    int n,count=0;
    cout<<"enter any number = ";
    cin>>n;
    for(int i=0 ; i<6 ; i++)
    {
        if(n<arr[i])
        {
            count++;

        }

    }
    cout<<count;




}
