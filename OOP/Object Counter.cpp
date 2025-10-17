#include<iostream>
using namespace std;

class Obj_Count
{

public:
    static int count; //STATIC member variable

    void count_call()
    {
        count++;
        cout << "I'm Object " << count << " and my SERIAL NUMBER = " << count << endl;
    }

};

int Obj_Count::count = 0; // initialization of STATIC keyword

int main()
{

    Obj_Count obj1;
    obj1.count_call();

    Obj_Count obj2;
    obj2.count_call();

    Obj_Count obj3;
    obj3.count_call();
}
