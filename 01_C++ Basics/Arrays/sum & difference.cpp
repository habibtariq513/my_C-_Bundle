#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,4,7,8,3,6},sum_of_even=0,sum_of_odd=0;
    int n =sizeof(arr)/sizeof(int);
    for(int i=0 ; i<n ;i++)
    {
        if(arr[i]%2==0)
        {
            sum_of_even+=arr[i];
        }
        else
        {
            sum_of_odd+=arr[i];
        }

    }
    cout<<"sum of ODD numbers in arrays = "<<sum_of_odd<<endl;
    cout<<"sum of EVEN numbers in arrays = "<<sum_of_even<<endl;
    cout<<"the difference between ODD and EVEN numbers = "<<sum_of_even - sum_of_odd<<endl;



}
