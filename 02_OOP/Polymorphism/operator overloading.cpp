#include <iostream>
#include<string>
using namespace std;

class Print{
public:
    void show(int x){
        cout << "int = " << x << endl;
    }
    void show(string str){
        cout << "String = " << str << endl;
    }
};

class Complex{
    int real, img;
public:
    Complex(int r, int i) : real(r), img(i) {}
    void showNum(){
        cout << real << " + " << img << "i\n";
    }

    void operator + (Complex &obj1) {
        int ResReal = this->real + obj1.real;
        int ResImg = this->img + obj1.img;
        Complex c3(ResReal, ResImg);
        cout << "Final Result = ";
        c3.showNum();
    }

    void operator - (Complex &obj2) {
        int ResReal = this->real - obj2.real;
        int ResImg = this->img - obj2.img;
        Complex c4(ResReal, ResImg);
        cout << "Final Result = ";
        c4.showNum();
    }

    void operator * (Complex &obj3){
        int ResReal = this->real * obj3.real;
        int ResImg = this->img * obj3.img;
        Complex c5(ResReal, ResImg);
        cout << "Final Result = ";
        c5.showNum();
    }

    Complex operator / (Complex &obj4){
        int ResReal = this->real / obj4.real;
        int ResImg = this->img / obj4.img;
        Complex c6(ResReal, ResImg);
        return c6;
    }

};

int main()
{
    Complex c1(14, 20);
    Complex c2(2, 5);
    c1.showNum();
    c2.showNum();
    c1 + c2;
    c1 - c2;
    c1 * c2;
    Complex c6 = c1 / c2;
    c6.showNum();
}

