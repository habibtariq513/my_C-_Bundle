#include<iostream>
using namespace std;
int main()
{
    int arr[5][5];

    for(int j = 0; j<5; j++)
    {
        for(int i = 0; i<5; i++)
        {
         //   cin >> arr[i][j];
         arr[i][j] = 10;
        }
        //cout << endl;
    }

    for(int j = 0; j<5; j++)
    {
        for(int i = 0; i<5; i++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

}


