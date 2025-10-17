#include<iostream>
using namespace std;
int main()
{
    int x[5];
    for(int i=0;i<=4;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<=4;i++)
    {
        cout<<x[i]<<" ";
    }
    /*We can UPDATE our element as well*/
     x[4]=273;
    cout<<endl;
    for(int i=0;i<=4;i++)
    {
        cout<<x[i]<<" ";
    }





}
