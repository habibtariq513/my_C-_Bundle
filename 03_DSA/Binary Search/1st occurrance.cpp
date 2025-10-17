// Find 1st occurrence

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5,7,7,8,8,8,8,8,8,10};
    int size = sizeof(arr)/sizeof(int);
    int target = 7;
    int high = size - 1, low = 0, mid;
    while(low <= high)
    {
        mid = (high + low)/2;
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
                cout << "1st Occurrance = " << mid <<endl;
                if(arr[mid+1] == target)
                {
                    while(arr[mid] == target)
                    {
                        mid++;
                    }
                    cout << "Last Ocurrance = " << mid - 1 << endl;
                    break;
                }
                else {
                    cout << target << " has only ONE occurrence " << endl;
                    break;
                }
            }
        }
    }
    return -1;
}

