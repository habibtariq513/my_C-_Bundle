#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int> vec;
    vec.push_back(24);
    vec.push_back(25);
    vec.push_back(26);
    vec.push_back(27);
    vec.pop_back(); // is se hamari array ka jo last element ho ga that will be deleted
    cout<<"size after pop_back = "<<vec.size()<<endl;
//
//    // FRONT FUNCTION ==> ye vector ki FIRST value ko PRINT kr deta hai
    cout << vec.front() << endl;
//
//    // BACK FUNCTION ==> ye vector ki LAST value ko PRINT kr deta hai
    cout << vec.back() << endl;

    //AT FUNTCION ==> is function ko vector ka jo bhi index number do wo is ma save value ko print kr deta hai
    cout << vec.at(2) << endl;



}




