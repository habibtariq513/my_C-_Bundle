// Find 1st and last occurrence

#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int target)
{
    int high = n - 1, low = 0, mid;
    while(low <= high)
    {
        mid = low + (high - low)/2;
        if(arr[mid] > target)
        {
            high = mid - 1;
        }
        else if(arr[mid] < target)
        {
            low = mid + 1;
        }
        else   // arr[mid] == target
        {
            if(mid > 0 && arr[mid-1] == target)
            {
                high = mid - 1;
            }
            else
            {
                return mid;
            }
        }
    }
    return -1;
}

int lastOcc(int arr[], int n, int target)
{
    int high = n - 1, low = 0, mid;
    while(low <= high)
    {
        mid = low + (high - low)/2;
        if(arr[mid] > target)
        {
            high = mid - 1;
        }
        else if(arr[mid] < target)
        {
            low = mid + 1;
        }
        else   // arr[mid] == target
        {
            if (mid == n-1 || arr[mid+1] != target)
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,1,2,3,3,5};
    int size = sizeof(arr)/sizeof(int);
    int target = 5;
    cout << "1st Occurance = " << firstOcc(arr, size, target) << endl;
    cout << "last Occurance = " << lastOcc(arr, size, target) << endl;


}


