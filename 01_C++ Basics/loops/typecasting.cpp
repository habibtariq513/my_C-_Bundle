#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=5;
    float b=7.6457;
    int c=static_cast<int>(b);
    double d=static_cast<double>(b);
    cout<<d<<fixed<<setprecision(5);
    cout<<endl;
    int e=int(b) ;
    cout<<e;
}
