#include <iostream>
using namespace std;
int  fact(int n)
{
    int fac=1;
    for(int i=1;i<=n;i++)
    {
         fac*=i;
    }
    return fac;
}
int nCr(int n,int r)
{
    int fact(n);
    int fact(r);
    int fact(n-r);
}
int main()
{
    int n,r;
    cout<<"enter n = ";
    cin>>n;
    cout<<"\nenter r = ";
    cin>>r;
    int nCr(n,r);
    cout<<fact(n);

}
