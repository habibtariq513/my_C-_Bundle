#include<iostream>
using namespace std;
int min(int a, int b)
{
    if(a<b) return a;
    else return b;
}
int hcf(int a , int b)
{
    int hcf;
    for(int i=1; i<=min(a,b); i++)
    {
        hcf=i;
    }
    return hcf;
}
int main()
{
    int a,b;
    cout<<"\nenter 1st number = "; cin>>a;
    cout<<"\nenter 2nd number = "; cin>>b;
    cout<<"the highest common factor these numbers = "<<hcf(a,b);






}

