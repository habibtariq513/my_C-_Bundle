#include<iostream>
using namespace std;

class  Student{
private:
    string password;
    string ID;
public:
    string name;
    string section;

    void set_pass(string p)
    {
        password = p;
    }
    string get_pass()
    {
        return password;
    }

    void set_ID(string id)
    {
        ID = id;
    }
    string get_ID()
    {
        return ID;
    }

};

int main()
{
    Student s1;
    s1.name = "Habib";
    s1.section = "A2";
    s1.set_pass("2110451");
    s1.set_ID("S2024376025");
    cout << "Your name = " << s1.name << endl;
    cout << "Your section = " << s1.section << endl;
    cout << "Your Password = " << s1.get_pass() << endl;
    cout << "Your ID = " << s1.get_ID() << endl;
}
