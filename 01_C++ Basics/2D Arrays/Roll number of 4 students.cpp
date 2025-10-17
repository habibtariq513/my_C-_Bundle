#include<iostream>
using namespace std;
int main()
{
    int arr[4][2] = {{76, 81}, {80, 91}, {89, 74}, {38, 62}};

   /* for(int j = 0; j<4; j++)
    {
        for(int i = 0; i<2; i++)
        {
            cin >> arr[i][j];

        }
        cout << endl;
    }*/

    for(int j = 0; j<4; j++)
    {
        for(int i = 0; i<2; i++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

}

