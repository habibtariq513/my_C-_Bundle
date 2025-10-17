#include<iostream>
using namespace std;
int main()
{
    int n,r,y;
    cout<<"Enter an ENDING no. = ";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(y=1;y<=10;y++)
        {
            cout<<y*r<<"\t";

        }
        cout<<endl;
    }
}
