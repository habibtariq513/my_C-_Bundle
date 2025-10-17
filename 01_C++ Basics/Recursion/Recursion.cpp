/*program through RECURSION (backward counting) with 2 VARIABLE only*/
#include<iostream>
using namespace std;
int rec(int n,int l);
int main()
{
    int s,e=7;
    cout<<"enter a ending number for the RECURSION purpose : ";
    cin>>s;
    rec(s,e);
}
int rec(int n,int l)
{
    if(l<n)
    {
        return 0;
    }
    cout<<l<<endl;
    rec(n,l-1);
}
