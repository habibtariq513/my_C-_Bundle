/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
             /* 0 1 2 3 4 */
    int arr[]= {1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0; i<n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    int temp,i=0;
    int j=n-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
            i++;
            j--;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
   return 0;
}
