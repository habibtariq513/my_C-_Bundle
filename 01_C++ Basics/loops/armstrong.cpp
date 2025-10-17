#include<iostream>
using namespace std;
int main()
{
    int cube,t,sum=0,n,last;
    cout<<"enter a number = ";
    cin>>n;
    t=n;
    for(int j=1;n!=0;j++)
    {
        last=n%10;
        cube=last*last*last;
        sum=sum+cube;
        n=n/10;
    }
    if(sum==t)
    {
        cout<<"\nArmstrong Number\n";

    }
    else{
        cout<<"\nnot an Armstrong number\n";
    }


}
