#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no. of rows and columns = ";
    cin>>n;

    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<char(j+96)<<" ";
        }
        cout<<endl;
    }


}




