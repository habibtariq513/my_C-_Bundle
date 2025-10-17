#include<iostream>
using namespace std;
int main()
{
    int n,f=1;
    cout<<"enter number = ";
    cin>>n;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            f=i;
        }
    }
    cout<<"\nthe highest common factor = "<<f;


}
