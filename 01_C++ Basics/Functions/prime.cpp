/* write a program that shows all prime numbers in a given range and program must be done through FUNCTIONS*/
#include<iostream>
using namespace std;
/*int prime(int n1,int n2)
{

    for(int j=1;j<=n1;j++)
    {
        if(n1%j==0)
        {
            if(n1%2==0)
            {
               n1=n1/10;
            }
            cout<<n1<<"\t";
        }
    }
}*/
int main()
{
    int s,e;
    cout<<"Enter starting and ending number = ";
    cin>>s>>e;
    for(s;s<=e;s++)
    {
        for(int j=1;j<=s;j++)
        {
            if(s%j==0)
            {
                cout<<"it is a prime number that's lying b/w your range = "<<s<<endl;
            }
        }
    }


}
