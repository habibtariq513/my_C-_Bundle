#include<iostream>
using namespace std;
int main()
{
    double  n,sum=1,factorial=1;
    cout<<"enter number = ";
    cin>>n;
    while(n!=0)
    {
        factorial*=n;
        sum+=n;
        cout<<n;
        if(n==1)
        {
            break;
        }
        cout<<" * ";
        n--;
    }
    cout<<" = "<<factorial<<endl;
    cout<<" = "<<sum<<endl;
}
