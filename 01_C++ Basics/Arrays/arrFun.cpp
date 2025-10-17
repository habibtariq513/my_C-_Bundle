#include<iostream>
using namespace std;
void change(int arr[])
{
    cout<<endl;
    //arr[3]=36;
    cin>>arr[3];


}
int main()
{
    int x[]= {1,2,3,4,5};
    for(int i=0 ; i<=4 ; i++)
    {
        cout<<x[i]<<endl;
    }
    change(x);
    cout<<endl;
    for(int i=0 ; i<=4 ; i++)
    {
        cout<<x[i]<<endl;
    }



}
