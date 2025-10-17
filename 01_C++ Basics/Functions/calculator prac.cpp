#include <iostream>
using namespace std;
int addition()
{
    int x, y;
	cout << "\nEnter 1st number = ";
	cin >> x;
	cout << endl;
	cout << "Enter 2nd number = ";
	cin >> y;
	cout << endl;
	cout << "Addition = " << x+y << endl;
}

int subtracton()
{
    int x, y;
	cout << "\nEnter 1st number = ";
	cin >> x;
	cout << endl;
	cout << "Enter 2nd number = ";
	cin >> y;
	cout << endl;
	cout << "Subtraction  = " << x-y << endl;
}

double multiply()
{
    int x, y;
	cout << "\nEnter 1st number = ";
	cin >> x;
	cout << endl;
	cout << "Enter 2nd number = ";
	cin >> y;
	cout << endl;
	cout << "Multiplication = " << x*y << endl;
}

double divide()
{
    int x, y;
	cout << "\nEnter 1st number = ";
	cin >> x;
	cout << endl;
	cout << "Enter 2nd number = ";
	cin >> y;
	cout << endl;
		cout << "Division = " << x/y << endl;
}

int main()
{
	int choice;
	while(1)
	{
		cout << "\n My Calculator" << endl;
		cout << "\n1.  Addition" << endl;
		cout << "\n2.  Subtraction" << endl;
		cout << "\n3.  Multiplication" << endl;
		cout << "\n4.  Division" << endl;
		cout << "\n5.  Exit" << endl;
		cout << "_____________________________________" << endl;

		cout <<"\n Enter CHOICE = ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 1:
			addition();
			break;
		case 2:
			subtracton();
			break;
		case 3:
			multiply();
			break;
		case 4:
			divide();
			break;
		case 5:
			cout << "\nEXIT " << endl;
			break;
		}

	}
}













