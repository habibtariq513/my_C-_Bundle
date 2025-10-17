#include<iostream>
using namespace std;
int main()
{
    string s = "habibtariq";
    cout << s << endl;

    s.push_back('r'); // it adds only one word.
    cout << s << endl;

    s.pop_back(); // it removes last word.
    cout << s << endl;

    s.append(" mukhtaar ahmed"); // it adds one string with another string
    cout << s << endl;

    s += " wald nabi baksh" ;// + operator is same as APPEND
    cout << s << endl;

    s.clear(); // it gets the whole array cleared out
    cout << " value of s = "<< s << endl;



}



