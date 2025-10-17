#include<iostream>
using namespace std;
int main()
{
    int x=5;
    int* p=&x;
    int* ptr=NULL;
    cout<<" p = "<<p<<endl;
    cout<<" *p = "<<*p<<endl;
    cout<<" &x = "<<*(&x)<<endl;
    cout<<" ptr = "<<ptr<<endl;

}

