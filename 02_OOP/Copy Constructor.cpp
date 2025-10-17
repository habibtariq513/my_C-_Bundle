/*
COPY CONSTRUCTOR:-
    It is used to Copy the properties of one OBJECT into another.
*/


#include<iostream>
using namespace std;

class car
{
public:
    string name;
    string color;

    car(string name, string color)
    {
        this->name = name;
        this->color = color;
    }

// Custom COPY Constructor = hum C++ ma apna khud ka bhi copy constructor bna sktay hain
    car(car &orgObj)
    {
        cout << "I'm in Custom Copy Constructor......\n";
        this->name = orgObj.name;
        this->color = orgObj.color;
    }
};

int main()
{
    car c1("baghati", "black");

    car c2(c1);
    cout << c2.color<< endl;
    cout << c2.name<< endl;
}
