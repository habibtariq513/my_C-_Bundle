#include<iostream>
using namespace std;
int number_printing(int num, int last )
{
    if(num>=last)
    {
        return last;
    }
     cout<<num<<endl;
     number_printing( num+1 , last);
}
int main()
{
    int n=1,l;
    cout<<"enter number = ";
    cin>>l;
    cout<<number_printing(n,l);

}
