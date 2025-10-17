#include<iostream>
using namespace std;

class Teacher{
public:
    int salary;
    string subject;
};

class Student{
public:
    int roll_no;
    float CGPA;
};

class TA : public Teacher, public Student{
public:
    string name;
};

int main()
{
    TA t1;
    t1.name = "HAbib Tariq";
    t1.salary = 30000;
    t1.CGPA = 3.76;
    t1.roll_no = 51;
    cout << t1.name << " " << t1.salary <<" " <<  t1.CGPA << " " << t1.roll_no << endl;
}
