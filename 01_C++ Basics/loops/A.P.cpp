#include<iostream>
using namespace std;
int main()
{

    double n,d,a;
    cout<<"enter numbers that u wanna print = ";
    cin>>n;
    cout<<"\nenter a common difference (d) = ";
    cin>>d;
    cout<<"\nenter a first term (a) = ";
    cin>>a;
    for(int i=a;i<=(a+(n-1)*d);i=i+d)
    {
        cout<<i<<endl;
    }



}
