/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class frndFunc{
private:
    int a, b;
public:
    frndFunc(int x, int y){
        a = x;
        b = y;
    }
    friend void add(frndFunc &obj);
};

void add(frndFunc &obj){
    cout << "Sum = " << obj.a + obj.b << endl;
}

int main()
{
    frndFunc c1(3, 5);
    add(c1);


    return 0;
}
