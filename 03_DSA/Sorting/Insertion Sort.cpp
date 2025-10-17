#include<iostream>
using namespace std;

void AverageCase()
{
    int arr[] = {3,1,2,4,5};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 1; i < n; i++)
    {
        int key = arr[i]; // inserted element
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void BestCase()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 1; i < n; i++)
    {
        int key = arr[i]; // inserted element
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
}

void WorstCase()
{
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 1; i < n; i++)
    {
        int key = arr[i]; // inserted element
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    cout << "=== Insertion Sort TEST CASES ===" << endl;
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

