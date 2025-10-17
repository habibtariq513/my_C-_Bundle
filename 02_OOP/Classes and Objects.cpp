#include<iostream>
#include<string>
using namespace std;

// ACCESS MODIFIERS:
//    ==> Private
//    ==> Public
//    ==> Protected

/*------------------------------------------------------- For Teacher --------------------------------------------------*/
class Teacher
{
private:
    double salary;
public:
    // Properties / Attributes
    string name;
    string dept;
    string subject;

    // methods / member functions //
    void change_dept(string New_dept)
    {
        dept = New_dept;
    }

    //Setter
    double set_salary(double s)
    {
        salary  = s;
    }

    //Getter
    double get_salary()
    {
        return salary;
    }
};

/*------------------------------------------------------- For Student --------------------------------------------------*/
class Student
{
private:
    string ID_password;
public:
    string Std_name;
    string Father_name;
    string class_name;
    string section;
    string subject;
    string username;

    string set_user_pass(string user_ID)
    {
        ID_password = user_ID;
    }

    string get_user_pass()
    {
        return ID_password ;
    }
};
int main()
{
    /*------------------------------------------------------- For Teacher --------------------------------------------------*/
    Teacher t1;
    t1.name = "Habib Tariq";
    cout << "Enter your Department = ";
    getline(cin, t1.dept);
    t1.subject = "Programming";
    t1.set_salary(25000);

    cout << t1.name << endl;
    cout << t1.get_salary()<< endl;
    cout << t1.dept << endl;

    /*------------------------------------------------------- For Student --------------------------------------------------*/
    Student s1;
    cout << "Enter your name = ";
    cin >> s1.Std_name;
    cout << endl;
    cout << "Enter your Father name = ";
    cin >> s1.Father_name;
    cout << endl;
    cout << "Enter your Class name = ";
    cin >> s1.class_name;
    cout << endl;
    cout << "Enter your Section name = ";
    cin >> s1.section;
    cout << endl;
    cout << "Enter your Subjects = ";
    cin >> s1.subject;
    cout << endl;
    cout << "Enter your Username = ";
    cin >> s1.username;
    cout << endl;
    s1.set_user_pass("7ZP@nVcF");


    cout << s1.Std_name ;
    cout << " " << s1.Father_name << endl;
    cout << s1.class_name << endl;
    cout << s1.section << endl;
    cout << s1.subject << endl;
    cout << s1.username << endl;
    cout << s1.get_user_pass() << endl;





}
