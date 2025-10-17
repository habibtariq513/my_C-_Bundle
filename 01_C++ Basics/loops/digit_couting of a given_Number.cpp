#include<iostream>
using namespace std;
int main()
{
    int n,LD,sum=0;
    cout<<"enter any number = ";
    cin>>n;

    while(n>0)
    {
        LD=n%10;//extract last number
        sum=sum+LD;
        n=n/10;//removing last number

    }
    cout<<sum;
}
