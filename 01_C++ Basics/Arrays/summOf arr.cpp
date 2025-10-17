#include<iostream>
using namespace std;
int main()
{
    int x[]= {1,2,3,4},sum;
    for(int i= 0; i<4 ; i++)
    {
        sum = sum+x[i];
        cout << x[i] << " ";

    }

    cout<<" = "<<sum<<endl;

}
