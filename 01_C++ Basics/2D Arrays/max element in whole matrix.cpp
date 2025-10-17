#include<iostream>
using namespace std;
int main()
{
    int a[2][3] = { {0,2,3}, {1,21,73} }, mx = INT_MIN, mn = INT_MAX;
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<3; j++)
        {

                mx =  max(a[i][j] , mx);
                mn = min(a[i][j] , mn);
        }

    }
    cout << "the max number in the whole array = " << mx << endl;
    cout << "the min number in the whole array = " << mn << endl;

}


