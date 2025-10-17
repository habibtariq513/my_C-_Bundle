
/* CONSTRUCTORS:
 These are the methods which automatically invoked(or called) when an OBJECT is created. It is used for initialization.
    _*_) it is called only ONCE(automatically) when an OBJECT is created.
    _*_) its name must be same as class's name.
    _*_) it doesn't have any return type.
    _*_) memory allocation is happened when CONSTRUCTOR is called.

TYPES :
    ==> Parameterized Constructor: Aesa constructor jis k function ma PARAMETERS hotay hain
    ==> Non-Parameterized Constructor: Aesa constructor jis k function ma PARAMETERS nahi hotay
    ==> Copy Constructor:

*/



#include<iostream>
#include<string>
using namespace std;


/*------------------------------------------------------- For Teacher --------------------------------------------------*/
class Teacher
{
private:
    double salary;
public:
    // Ye hamara apna bnaya hua CONSTRUCTOR hai
// ==> Parameterized Constructor
    Teacher()
    {
        dept = "Computer Science";
    }

// ==> Non-Parameterized Constructor
    Teacher(string n, string d, string sub, double sal)
    {
        name = n;
        dept = d;
        subject = sub;
        salary = sal;
    }


    // Properties / Attributes
    string name;
    string dept;
    string subject;

    // methods / member functions //
    void change_dept(string New_dept)
    {
        dept = New_dept;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
    }
};

int main()
{
    /*------------------------------------------------------- For Teacher --------------------------------------------------*/
    Teacher t1("Habib Tariq", "Computer Science", "PF", 25000);
    t1.getInfo();


}

