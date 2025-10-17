
#include <iostream>
using namespace std;
int main()
{
    int n,target;
    bool flag=false;// false means ABSENT
    cout<<"enter a targeted number = ";
    cin>>target;
    int arr[]= {3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    /*for(int i=0; i<size; i++)
    {
        if(arr[i]==target)
        {
            cout<<target<<" is present in this array "<<endl;
            break;
        }
    }*/

    // USING TRUE FALSE
    for(int i=0; i<size; i++)
    {
        if(arr[i]==target)
        {
            flag= true;
            break;

        }
    }
    if(flag == true)
    {
        cout<<target<<" is present in this array "<<endl;
    }
    else
    {
        cout<<target<<" is NOT present in this array "<<endl;
    }




    return 0;
}
