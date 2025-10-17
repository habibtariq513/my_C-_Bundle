#include<iostream>
using namespace std;

void AverageCase()
{
    int arr[] = {1, 10, 30, 73, 3, 5, 2, 4};
    int n = sizeof(arr) / sizeof(int);
    for(int i = 0; i < n-1; i++)   // No of Passes
    {
        for(int j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}

void BestCase()  // Already Sorted
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    for(int i = 0; i < n-1; i++)   // No of Passes
    {
        for(int j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}


void WorstCase()
{
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr) / sizeof(int);
    for(int i = 0; i < n-1; i++)   // No of Passes
    {
        for(int j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}

int main()
{
    cout << "=== Bubble Sort TEST CASES ===" << endl;
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
