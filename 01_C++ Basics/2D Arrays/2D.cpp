#include<iostream>
using namespace std;
int main()
{
    int arr[3][2];
    int tr[2][3];
    arr[0][0] = 3;
    arr[0][1] = 4;

    arr[1][0] = 6;
    arr[1][1] = 7;

    arr[2][0] = 9;
    arr[2][1] = 10;

    cout << "Before transpose = " << endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            tr[i][j] = arr[i][j];
            cout << tr[i][j] << "  ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "After transpose = " << endl;
    for(int j=0; j<2; j++)
    {
        for(int i=0; i<3; i++)
        {
            cout << tr[i][j] << "  ";
        }
        cout << endl;
    }

}
