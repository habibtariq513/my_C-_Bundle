#include<iostream>
using namespace std;
int main()
{
    int n,last,t,m,f,sum;
    cout<<"enter any number = ";
    cin>>n;
    t=n;
    for(int j=1;t!=0;j++)
    {

        last=t%10;
        f=1;
        for(m=1;m<=last;m++)
        {
            f=f*m;
        }
        sum=sum+f;
        t/=10;
    }

    if(sum==n)
    {
        cout<<"\nits a STRONG number";

    }
    else{
        cout<<"\nits a STRONG number";
    }

}
