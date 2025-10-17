#include<iostream>
using namespace std;

class Calculator
{
private:
    double num_1 = 0;
    double num_2 = 0;
public:
    void set_num1(double n1)
    {
        num_1 = n1;
    }
    double get_num1()
    {
        return num_1;
    }
    void set_num2(double n2)
    {
        num_2 = n2;
    }
    double get_num2()
    {
        return num_2;
    }

    double addition()
    {
        return num_1 + num_2;
    }
    double subtracton()
    {
        return num_1 - num_2;
    }
    double multiplication()
    {
        return num_1 * num_2;
    }
    double division()
    {
        return num_1 / num_2;
    }

    void Display_Menu()
    {
        cout << "\n_____________________________________" << endl;
        cout << "\n    **********************           |" << endl;
        cout << "  *                        *" ;
        cout << "\n* \t My Calculator\t     *       |" << endl;
        cout << "  *                        *" ;
        cout << "\n    **********************           |" << endl;
        cout << "\n\t1. | Addition |              |" << endl;
        cout << "\n\t2. | Subtraction |           |" << endl;
        cout << "\n\t3. | Multiplication |        |" << endl;
        cout << "\n\t4. | Division |              |" << endl;
        cout << "\n\t5. | Exit |                  |" << endl;
        cout << "_____________________________________" << endl;
    }
};

int main()
{
    while(1)
    {
        Calculator c1;
        double input_n1, input_n2 ;
        int choice;
        c1.Display_Menu();

        cout << "\nEnter your CHOICE = ";
        cin >> choice;
        cout << "\nEnter your 1st Number = ";
        cin >> input_n1;
        cout << "\nEnter your 2nd Number = ";
        cin >> input_n2;

        c1.set_num1(input_n1);
        c1.set_num2(input_n2);

        switch(choice)
        {
        case 1:
            cout << "\nResult: " << c1.get_num1() << " + " << c1.get_num2() << " = " << c1.addition();
            break;
        case 2:
            cout << "\nResult: "  << c1.get_num1() << " - " << c1.get_num2() << " = " << c1.subtracton();
            break;
        case 3:
            cout << "\nResult: "  << c1.get_num1() << " * " << c1.get_num2() << " = " << c1.multiplication();
            break;
        case 4:
            if(c1.get_num2() == 0)
            {
                cout << "ZERO CANNOT be divided with any number" << endl;
            }
            else
            {
                cout << "\nResult: "  << c1.get_num1() << " / " << c1.get_num2() << " = " << c1.division();
            }
            break;
        case 5:
            cout << "\n    ******************************************" << endl;
            cout << "  *                                            *" ;
            cout << "\n* \t THANKS For using My CALCULATOR \t *" << endl;
            cout << "  *                                            *" ;
            cout << "\n    ******************************************" << endl;
            break;
        default:
            cout << "\n SORRY! You are gonna OUT OF CHOICE" << endl;
        }
    }
}
