#include<iostream>
using namespace std;

class Static_var{
    static float ROI;
public:
    int acc = 2;
    static float set_roi(float r){ // STATIC FUNCTION
            ROI = r;
    }
};

float Static_var::ROI = 3.5; // static is DEFINED outside the class using MEMBERESHIP LABLE

int main()
{
    Static_var s1;
     cout << s1.acc << endl;
     cout << s1.set_roi(4.5) << endl; // it is a way of calling STATIC FUNCTION when static member variable is PRIVATE
}
