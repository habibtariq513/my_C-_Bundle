#include <iostream>
using namespace std;

class complex {
	int a, b;
public:
	void set_data(int x, int y) {
		a = x;
		b = y;
	}
	void showData() {
		cout << a << " " << b << endl;
	}

	complex operator ++ () {
		complex temp;
		temp.a = ++a;
		temp.b = ++b;
		return temp;
	}

};

int main()
{
	complex c1;
	complex c2;
	c1.set_data(4, 5);
	c2 = ++ c1;
	c2.showData();

	return 0;
}
