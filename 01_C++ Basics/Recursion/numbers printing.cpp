/*program through RECURSION (backward counting) with 1 VARIABLE only*/
#include<iostream>
using namespace std;
int rec(int l);
int main()
{
    int e;
    cout<<"enter a ending number for the RECURSION purpose : ";
    cin>>e;
    rec(e);
}
int rec(int l)
{
    if(l==0)
    {
        return 0;
    }
    cout<<l<<endl;
    rec(l-1);
}
