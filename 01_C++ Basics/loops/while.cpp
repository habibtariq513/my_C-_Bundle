#include<iostream>
using namespace std;
int main()
{
    int counter,sum;
    sum=0;
    counter=1;
    while(counter<=10)
    {
        cout<<counter<<"\t";
        sum=sum+counter;
        cout<<sum<<"\n";
        counter++;
    }


}
