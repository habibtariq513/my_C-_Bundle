#include<iostream>
using namespace std;

class Parent{
public:
    void show(){
    cout << "Parent showwwww..." << endl;
    }
};

class Child : public Parent{
public:
    void show(){
    cout << "Child showwwww..." << endl;
    }
};

int main()
{
    Child c1;
    c1.show();
}
