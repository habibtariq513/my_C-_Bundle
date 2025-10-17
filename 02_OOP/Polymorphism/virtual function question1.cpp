#include<iostream>
using namespace std;

class Animal{
public:
    virtual void makesound(){
      cout << "Animal have different sounds" << endl;
    }
    virtual void mimic(){}
};

class Lion : public Animal{
public:
    void makesound() override{
      cout << "The lion says: Roar!" << endl;
    }
};

class Elephant: public Animal{
public:
    void makesound()override{
      cout << "The elephant says: Trumpet!" << endl;
    }
};

class Parrot : public Animal{
public:
    void makesound()override{
      cout << "The parrot says: Squawk!" << endl;
    }
    void mimic(){
        cout << "The parrot mimics: Roar!" << endl;
    }
};

int main(){
    Lion l1;
    Elephant e1;
    Parrot p1;
    Animal *a[] = {&l1, &e1, &p1};

    for(int i = 0; i<3; i++)
    {
        a[i]->makesound();
    }

    for(int i = 0; i<3; i++)
    {
        a[i]->mimic();
    }
}

