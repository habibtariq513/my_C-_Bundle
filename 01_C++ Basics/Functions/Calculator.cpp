#include <iostream>
using namespace std;
double a, b;
double addition()
{
	cout << "\n\tEnter 1st number = ";
	cin >> a;
	cout << endl;
	cout << "\tEnter 2nd number = ";
	cin >> b;
	cout << endl;
	cout << "\n_____________________________________" << endl;
	cout << "\n\tAddition ==> " << a << " + " << b << " = " << a+b << endl;
	cout << "_____________________________________" << endl;
}

double subtracton()
{
	cout << "\n\tEnter 1st number = ";
	cin >> a;
	cout << endl;
	cout << "\tEnter 2nd number = ";
	cin >> b;
	cout << endl;
	cout << "\tSubtraction ==> " << a << " - " << b << " = " << a-b << endl;
}

double multiplication()
{
	cout << "\n\tEnter 1st number = ";
	cin >> a;
	cout << endl;
	cout << "\tEnter 2nd number = ";
	cin >> b;
	cout << endl;
	cout << "\tMultiplication ==> " << a << " x " << b << " = " << a*b << endl;
}

double division()
{
	cout << "\n\tEnter 1st number = ";
	cin >> a;
	cout << endl;
	cout << "\tEnter 2nd number = ";
	cin >> b;
	cout << endl;
	if(b == 0)
	{
		cout << "Number can NOT be divided with ZERO" << endl;
	}
	else
	{
		cout << "\tDivision ==> " << a << " / " << b << " = " << a/b << endl;
	}
}

int main()
{
	int choice;
	while(1)
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
		cout <<"\n\tNow Enter your CHOICE = ";
		cin >> choice;
		cout << endl;
		if(choice > 5)
		{
			cout << "SORRY! You are NOT allowed to choose a number greater than 5" << endl;
		}
		else
		{
			if(choice == 1)
			{
				addition();
			}
			else if(choice == 2)
			{
				subtracton();
			}
			else if(choice == 3)
			{
				multiplication();
			}
			else if(choice == 4)
			{
				division();
			}
			else if(choice == 5)
			{
				cout << "\n    ******************************************" << endl;
				cout << "  *                                            *" ;
				cout << "\n* \t THANKS For using My CALCULATOR \t *" << endl;
				cout << "  *                                            *" ;
				cout << "\n    ******************************************" << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				break;
			}
		}

	}
	return 0;
}







