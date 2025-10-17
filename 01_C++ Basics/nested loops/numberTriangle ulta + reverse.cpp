#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter rows and columns = ";
    cin>>n;
    int temp=n;
    for(int i=temp; i>=1; i--)
    {
        for(int j=n; j<=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

