#include<iostream>
using namespace std;
int main()
{
    int n,count;
    cout<<"enter a number= ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    cout<<"\nthe factors of this numbers are = "<<count;
    if(n==1)
    {
        cout<<"\nneither prime nor composite"<<endl;
    }
    else if(count==2)
    {
        cout<<"\nso its a prime number"<<endl;
    }
    else
    {
        cout<<"\nso its a composite number"<<endl;
    }
}
