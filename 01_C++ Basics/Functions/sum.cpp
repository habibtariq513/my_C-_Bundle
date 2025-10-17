#include<iostream>
using namespace std;
int sum(int n1,int n2)
{
    int sum=n1+n2;
    return sum;
}
int main()
{
    int a;
    int b;
    cin>>a>>b;
    cout<<"the sum through functions = "<<sum(a,b);

}
