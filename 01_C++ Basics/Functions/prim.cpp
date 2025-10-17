#include<iostream>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        return 1;
    }

}
int main()
{
    int n1,n2;
    cout<<"enter starting value = ";
    cin>>n1;
    cout<<"\nenter ending value = ";
    cin>>n2;
    for(int j=n1;j<=n2;j++)
    {
        if(isprime(j))
        {

        }
    }


}
