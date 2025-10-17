/* #include<iostream>
using namespace std;
int main()
{
   int s=0;
    int n=1;

    while(s<=5)
    {
        cout<<"*\t*\n";


        while(n<=6)
        {
            cout<<"*";
            n++;
        }
     s++;
    }

}*/
#include <iostream>
using namespace std;

int main() {
    int row = 1;
    while (row <= 5) {
        int col = 1;
        while (col <= 5) {
            if (col == 1 || col == 5 || row == 3)
                cout << "* ";
            else
                cout << "  ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
