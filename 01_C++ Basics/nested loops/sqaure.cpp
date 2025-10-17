#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter no. of rows and columns = ";
    cin>>m;

    cout<<endl;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }


}

