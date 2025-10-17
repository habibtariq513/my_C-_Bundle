#include <iostream>
using namespace std;

void Selection_Sort()
{
    int arr[] = {5,10,1,4,2,3,0,20,-8};
    int n = sizeof(arr) / sizeof(int);
    for(int i = 0; i < n-1; i++)
    {
        int mn = INT_MAX;
        int mn_indx = -1;
        for(int j = i; j < n; j++)
        {
            if(arr[j] < mn)
            {
                mn = arr[j];
                mn_indx = j;
            }
        }
        swap(arr[i], arr[mn_indx]);
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
}

void BestCase()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    for(int i = 0; i < n-1; i++)
    {
        int mn = INT_MAX;
        int mn_indx = -1;
        for(int j = i; j < n; j++)
        {
            if(arr[j] < mn)
            {
                mn = arr[j];
                mn_indx = j;
            }
        }
        swap(arr[i], arr[mn_indx]);
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }

}

void AverageCase()
{
    int arr[] = {3, 1, 4, 2, 5};
    int n = sizeof(arr) / sizeof(int);
    for(int i = 0; i < n-1; i++)
    {
        int mn = INT_MAX;
        int mn_indx = -1;
        for(int j = i; j < n; j++)
        {
            if(arr[j] < mn)
            {
                mn = arr[j];
                mn_indx = j;
            }
        }
        swap(arr[i], arr[mn_indx]);
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
}

void WorstCase()
{
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr) / sizeof(int);
    for(int i = 0; i < n-1; i++)
    {
        int mn = INT_MAX;
        int mn_indx = -1;
        for(int j = i; j < n; j++)
        {
            if(arr[j] < mn)
            {
                mn = arr[j];
                mn_indx = j;
            }
        }
        swap(arr[i], arr[mn_indx]);
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }

}

int main()
{
    cout << "=== Selection Sort TEST CASES ===" << endl;
    cout << endl;
    cout << "\nBest Case -- Already Sorted" << endl;
    BestCase();
    cout << endl;
    cout << "\nAverage Case -- Not fully Sorted" << endl;
    AverageCase();
    cout << endl;
    cout << "\nWorst Case -- Totally Dis-Sorted" << endl;
    WorstCase();
}

