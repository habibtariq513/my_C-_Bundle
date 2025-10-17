#include<iostream>
using namespace std;

class ToolBooth
{
public:
    unsigned int total_car;
    int total_money;
    int paid_cars = 0;
    int Unpaid_cars = 0;

    // Constructor
    ToolBooth(unsigned int tc, int tm)
    {
        total_car = tc;
        total_money = tm;
    }

    // Member functions
    void PAYING_CARS()
    {
        paid_cars++;
        total_car++;
        total_money = total_money + 50;
        cout << "\nIt's a PAID Car and its money has been COLLECTED " << endl;
    }
    void No_PAYING_CARS()
    {
        Unpaid_cars++;
        total_car++;
        cout << "\nIt's an UN-PAID Car" << endl;
    }
    void display()
    {
        cout << "\n\t**********************************" << endl;
        cout << "\t|    Total Cars = " << total_car << "              |" << endl;
        cout << "\t|     ==> Paying Cars = " << paid_cars << "        |" << endl;
        cout << "\t|     ==> Un Paying Cars = " << Unpaid_cars << "     |"  << endl;
        cout << "\t|    Money Collected = " << total_money  << "         |" << endl;
        cout << "\t**********************************" << endl;
        cout << endl;
    }
};

int main()
{
    int choice;
    ToolBooth t1(0, 0);

    while(1)
    {
        cout << "\n\t\t\t\t**************************************" << endl;
        cout << "\t\t\t\t         Welcome to TOOL-BOOTH" << endl;
        cout << "\n\t\t\t\t       1. | Add Paying Cars |" << endl;
        cout << "\n\t\t\t\t       2. | Add Un-Paying Cars |" << endl;
        cout << "\n\t\t\t\t       3. | Display entire DATA |" << endl;
        cout << "\n\t\t\t\t       4. | Exit |" << endl;
        cout << "\n\t\t\t\t**************************************" << endl;
        cout << "\nEnter your CHOICE = ";
        cin >> choice;
        cout << endl;
        if(choice == 1)
        {
            t1.PAYING_CARS();
        }
        else if(choice == 2)
        {
            t1.No_PAYING_CARS();
        }
        else if(choice == 3)
        {
            t1.display();
        }
        else if(choice == 4)
        {
            cout << "\n**************************" << endl;
            cout << "Thanks for your COOPERATION" << endl;
            cout << "**************************" << endl;
            break;
        }
        else{
            cout << "\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
            cout << "   XXXX --- SORRY! You're only allowed to choose number between 1 and 4 --- XXXX" << endl;
            cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
        }
    }
}
