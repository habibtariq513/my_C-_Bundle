#include<iostream>
using namespace std;
int main()
{
    int x[]= {0,2,3,5,4,10,6,9,123,500};
    int mx=x[0];
    int n= sizeof(x)/sizeof(int);
    for(int i=1; i<n; i++)
    {
        if(x[i]>mx)
        {
            mx=x[i];
        }
    }
    cout<<"maximum number in a whole array = "<<mx;
    cout<<endl;
    cout<<endl;
    int mn=x[0];
    for(int i=1; i<n; i++)
    {
        if(x[i]<mn)
        {
            mn=x[i];
        }
    }
    cout<<"minimum number in a whole array = "<<mn;
    cout<<endl;



}
