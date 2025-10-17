#include<iostream>
using namespace std;
int main()
{
    int n,a,d;
    cout<<"enter last term = ";
    cin>>n;
    cout<<"\nenter first term = ";
    cin>>a;
    cout<<"\nenter common difference = ";
    cin>>d;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<endl;
        a=a*d;

    }



}

