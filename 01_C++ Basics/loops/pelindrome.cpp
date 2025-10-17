#include<iostream>
using namespace std;
int main()
{
    int n,e,last,sum;
    cout<<"enter any number = ";
    cin>>n;
    e=n;
    while(n>0)
    {
        last=n%10;
        sum=sum*10+last;
        n=n/10;
    }
    if(e==sum)
    {
        cout<<"its a pelindrome";
    }
    else
    {
        cout<<"its not a pelindrome";
    }
}
