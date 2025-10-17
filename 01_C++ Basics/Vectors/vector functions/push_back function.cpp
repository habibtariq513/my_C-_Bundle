#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int> vec;
    cout<<"size before push_back = "<<vec.size()<<endl;
    vec.push_back(24); // ye array k end ma kisi bhi value ko insert krnay k liye use hota hai
    vec.push_back(25);
    vec.push_back(26);
    vec.push_back(27);
    cout<<"size after push_back = "<<vec.size()<<endl;
    for(int i : vec)
    {
        cout<<i<<endl;
    }
}



