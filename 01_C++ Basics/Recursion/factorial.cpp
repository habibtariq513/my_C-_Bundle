#include<iostream>
using namespace std;
int factorial(int num)
{
    if(num==1)
    {
        return 1;
    }
    return num*(factorial(num-1));
}
int main()
{
    int n;
    cout<<"enter a number of which u want to calculate the FACTORIAL = ";
    cin>>n;
    if (n<0)
    {
        cout<<"\nnegative number is not allowed\n";
    }
    else
    {
        cout<<"\nThe FACTORIAL of "<<n<<" = "<<factorial(n);
    }
}
