#include<iostream>
using namespace std;

class Parent{
public:
    void show(){
    cout << "Parent showwwww..." << endl;
    }
    virtual void hello(){
        cout << "Parent hello....." << endl;
    }
};

class Child : public Parent{
public:
    void show(){
    cout << "Child showwwww..." << endl;
    }

    // Function Overriding in CHILD CLASS
    void hello(){
        cout << "Child hello....." << endl;
    }
};

int main()
{
    Parent *p1;
    Child c1;
    p1 = &c1;
    p1->hello();
}

