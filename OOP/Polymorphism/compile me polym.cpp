#include <iostream>
#include<string>
using namespace std;

class Print{
public:
    // int x;
    void show(int x){
        cout << "int = " << x << endl;
    }
    void show(string str){
        cout << "String = " << str << endl;
    }
};

int main()
{
    Print p1;
    p1.show(25);
    p1.show("Habib");
}
