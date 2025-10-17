/*
THIS Pointer:-
    it is a special pointer that points to the current object.
    "this->prop" is same as " *(this).prop "


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
    Teacher(string name, string dept, string subject, double salary)
    {
        this-> name = name;
        this-> dept = dept;
        this-> subject = subject;
        this-> salary = salary;
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


