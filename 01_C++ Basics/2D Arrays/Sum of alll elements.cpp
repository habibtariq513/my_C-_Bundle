#include<iostream>
using namespace std;
int main()
{
    int a[2][3] = { {1,2,10}, {1,1,3} }, sum = 0, product = 1;
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<3; j++)
        {
            sum += a[i][j];
            product *= a[i][j];
        }

    }
    cout << "the sum of all elements = " << sum << endl;
    cout << "the product of all elements = " << product << endl;


}



