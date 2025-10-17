#include<iostream>
using namespace std;

class Animal{
public:
    Animal(){}
    string color = "Brown";
    void Eats()
    {
        cout << "Cow has " << color << " color" << endl;
    }

};

class Fish : public Animal{
public:
    Fish(){}
    int fins;
    void swims()
    {
        cout << "Swims" << endl;
    }

};

int main()
{
    Fish f1;
    f1.fins = 3;
    f1.swims();
    f1.Eats(); // it is INACCESSABLE bcz MODDE OF INHERITANCE is PROTECTED.
}
