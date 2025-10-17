#include<iostream>
using namespace std;
int main()
{
    int n,ld,product=1;
    cout<<"enter a number =";
    cin>>n;
    cout<<endl;

  while(n!=0)
  {
      ld=n%10;
      product*=ld;
      n/=10;
  }
    cout<<product<<endl;
}
