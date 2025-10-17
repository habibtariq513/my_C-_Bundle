#include<iostream>
using namespace std;
int main()
{
    int n,last_digit,reverse=0,sum;
    cout<<"enter a number  = ";
    cin>>n;
    int temp=n;
    cout<<endl;
    while(temp!=0)
    {
        last_digit=temp%10;
        reverse=(reverse*10)+last_digit;
        temp=temp/10;
    }
    sum=n+reverse;
    cout<<"the Reverse of all digits = "<<reverse<<endl;
    cout<<endl;
    cout<<"Entered number = "<<n<<endl;
    cout<<endl;
    cout<<"Reversed number = "<<reverse<<endl;
    cout<<endl;
    cout<<"the sum of entered number("<<n<<") and reversed number("<<reverse<<") = "<<sum<<endl;
    cout<<endl;

}
