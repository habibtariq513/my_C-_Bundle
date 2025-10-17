#include <iostream>
using namespace std;

class A{
public:
    void f2(){
        cout << "F2() in class A" << endl;
    }
};

class B : public A{
public:
    void f2(int y){ // It is performing METHOD HIDING here
        cout << "F2() in class B = " << y << endl;
    }
};

int main()
{
    B b1;
    b1.f2(5); // method in B will be called
    // b1.f2(); --> Error
    return 0;
}


// In order to prevent METHOD HIDING we use USING keyword for getting it included into the SCOPE of class B
//#include <iostream>
//using namespace std;
//
//class A{
//public:
//    void f2(){
//        cout << "F2() in class A" << endl;
//    }
//};
//
//class B : public A{
//public:
//    using A :: f2;
//    void f2(int y){
//        cout << "F2() in class B = " << y << endl;
//    }
//};
//
//int main()
//{
//    B b1;
//    b1.f2();
//    b1.f2(5); // method in B will be called
//    // b1.f2(); --> Error
//
//    return 0;
//}
