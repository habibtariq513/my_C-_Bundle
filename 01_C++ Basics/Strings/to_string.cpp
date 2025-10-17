#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int x = 12345;
    cout << "it is printng as a number = " << x << endl;
    string s = to_string(x); // it converts number to string as it defines through its name to_string
    cout << "it is printng as a string = " << s << endl;

    string n = "1234";
    cout << "it is printng as a string = " << n << endl;
    int y = stoi(n);// it converts string to number as it defines through its name stoi ==> string to integer
    cout << "it is printng as a number = " << y << endl;




}




