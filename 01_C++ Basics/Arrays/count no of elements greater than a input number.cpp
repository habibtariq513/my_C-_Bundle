#include<climits>
#include <iostream>
using namespace std;
int main()
{
    int arr[]= {10,20,4,90,6};
    int count=0;
    //int mx=INT_MIN;
    int x;
    cout<<"enter a number = ";
    cin>>x;
    int size_Of_Array=sizeof(arr)/sizeof(int);
    for(int i=0; i<size_Of_Array; i++)
    {
        if(arr[i] > x)
        {
            count++;
        }
    }
    cout<<"the larger number that is greater than an input number in the whole array = "<<count<<endl;




    return 0;
}

