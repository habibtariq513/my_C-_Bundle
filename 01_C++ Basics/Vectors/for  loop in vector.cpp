#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int> vec(4,9);
    for(int i : vec)    /* Vectors ma index value nahi bul k us index ma jo value ho go wo store ho gi i ma or jis datatype se vector ko declare kiya jaye ga
        same usi datatype se for loop k ander waley variable yani i ko declare kiya jaye ga*/
    {
        cout<<i<<endl;
    }
}

