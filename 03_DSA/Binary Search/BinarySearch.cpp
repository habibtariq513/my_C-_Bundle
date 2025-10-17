#include<iostream>
using namespace std;

void BestCase(int arr[], int n)
{
    int target = 3;
    int mid, low, high = n - 1;
    while(low <= high)
    {
        mid = (high + low)/2;
        if(target == arr[mid])
        {
            cout << "target = " << target  << " <==> " << " Index = " << mid << endl;
            break;
        }
        else if(target < arr[mid] )
        {
            high = mid - 1;
        }
        else if(target == arr[mid])
        {
            low = mid + 1;
        }
        else {
            cout << target << " not PRESENT!" << endl;
            break;
        }
    }
}

void AverageCase(int arr[], int n)
{
    int target = 2;
    int mid, low, high = n - 1;
    while(low <= high)
    {
        mid = (high + low)/2;
        if(target == arr[mid])
        {
            cout << "target = " << target  << " <==> " << " Index = " << mid << endl;
            break;
        }
        else if(target < arr[mid] )
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}

void WorstCase(int arr[], int n)
{
    int target = 7;
    int mid, low, high = n - 1;
    while(low <= high)
    {
        mid = (high + low)/2;
        if(target == arr[mid])
        {
            cout << "target = " << target  << " <==> " << " Index = " << mid << endl;
            break;
        }
        else if(target < arr[mid] )
        {
            high = mid - 1;
        }
        else if(target == arr[mid])
        {
            low = mid + 1;
        }
        else {
            cout << target << " not PRESENT!" << endl;
            break;
        }
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(int);
    cout << "=== Binary Search TEST CASES ===" << endl;
    cout << endl;
    BestCase(arr, size);
    AverageCase(arr, size);
    WorstCase(arr, size);

}

