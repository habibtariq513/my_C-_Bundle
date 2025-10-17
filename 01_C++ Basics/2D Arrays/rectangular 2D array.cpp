#include<iostream>
using namespace std;
int main()
{
    int arr[5][4] = { {1,2,3,4}, {5,9,10,11}, {6,12,15,16}, {7,13,17,19}, {8,14,18,20} };
    int rs, re, cs, ce, sum = 0;
    for(int i = 0; i<5; i++ )
    {
        for(int j = 0; j<4; j++)
        {
            cout << arr[i][j] << "   ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << "enter 1st Coordinate between 0 and 4 = " << endl;
    cin >> rs;
    cin >> cs;
    cout << endl;
    cout << "enter 2nd Coordinate between 0 and 4 = " << endl;
    cin >> re;
    cin >> ce;
    cout << endl;
    cout << "Your Coordinates are = " << "( " << rs << ", " << cs << ") and , " << "( " << re << ", " << ce << ")" << endl;
    cout << endl;
    for(int i = rs; i<=re; i++ )
    {
        for(int j = cs; j<=ce; j++)
        {
            cout << arr[i][j] << "  ";
            sum += arr[i][j];
        }
        cout << endl;
    }
        cout << endl;
        cout << "The SUM of your selected arrays = " << sum << endl;





}
