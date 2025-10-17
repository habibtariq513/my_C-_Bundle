#include<iostream>
using  namespace std;
int main()
{
            /* 0 1 2 3 4 */
    int arr[]={1,2,3,4,5};
    for(int i=0 ; i<=4 ;i++)
    {
        if(i%2!=0)
        {
            cout<<"ODD indexed values are {2,4} = ";
            arr[i]*=2;
            cout<<arr[i]<<endl;
        }
    }
    for(int i=0 ; i<=4 ;i++)
    {

        if(i%2==0)
        {
            cout<<"EVEN indexed values are {1,3,5} =";
            arr[i]+=10;
            cout<<arr[i]<<endl;
        }
    }



}
