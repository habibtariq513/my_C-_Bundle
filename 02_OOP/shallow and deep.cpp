#include<iostream>
using namespace std;

class Car{
public:
    string name;
    string model;
    Car(string name, string model)
    {
        this->name = name;
        this->model = model;
    }



    Car(Car &original)
    {
        name = original.name;
        model = original.model;
    }
};

int main()
{
    Car c1("Baghatti", "2024");
    Car c2(c1);
    cout << c2.name << endl;
    cout << c2.model << endl;
}
