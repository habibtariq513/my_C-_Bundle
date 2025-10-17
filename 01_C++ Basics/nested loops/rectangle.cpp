#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter no. of rows = ";
    cin>>m;
    cout<<"enter no. of columns = ";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }


}
