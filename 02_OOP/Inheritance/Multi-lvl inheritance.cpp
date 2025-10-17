#include<iostream>
using namespace std;

class Animal{
public:
    Animal(){}
    void Eats()
    {
        cout << "EATS....." << endl;
    }
    void Breathe()
    {
        cout << "Breathe....." << endl;
    }

};

class mammal : public Animal{
public:
    string Blood_Type;
    mammal(){
        Blood_Type = "Warm";
    }
};

class Dog: public mammal{
public:
    void Tail_Wags(){
        cout << "Dog wags its TAIL" << endl;
    }
};

int main()
{
    Dog d1;
    d1.Breathe();
    d1.Eats();
    d1.Tail_Wags();
    cout << d1.Blood_Type << endl;
}

