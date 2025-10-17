#include<iostream>
using namespace std;
int main()
{
    int n,ld,sum_of_even=0,sum_of_odd=0;
    cout<<endl;
    cout<<"FOR EVEN NUMBERS";
    cout<<endl;
    cout<<"enter a number =";
    cin>>n;
    cout<<endl;
    while(n>0)
    {

        ld=n%10;
        if(ld%2==0)
        {
            cout<<ld<<" + ";
            sum_of_even+=ld;

        }n/=10;
    }

    cout<<" = "<<sum_of_even<<endl;
}
