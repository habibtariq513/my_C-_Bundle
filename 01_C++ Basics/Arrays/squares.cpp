#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number = ";
    cin>>n;
    int x[n];
    cout<<"Array = {";
    for(int i=1 ; i<=n ; i++)
    {
        x[n]=i*i;
        cout<<x[n]<<", ";
    }
    cout<<"}";
}
