#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int computer_choice() {
    int comp_choice = rand() % 3 + 1;
    switch (comp_choice) {
        case 1:
            cout << "\n\nComputer chose = ROCK\n";
            break;
        case 2:
            cout << "\n\nComputer chose = PAPER\n";
            break;
        case 3:
            cout << "\n\nComputer chose = SCISSORS\n";
            break;
    }
    return comp_choice;
}

int user_choice() {
    int user_choice;
    cout << "**Press 1 for ROCK.\n";
    cout << "**Press 2 for PAPER.\n";
    cout << "**Press 3 for SCISSORS.\n";
    cout << "Enter your CHOICE = ";
    cin >> user_choice;
    if (user_choice != 1 && user_choice != 2 && user_choice != 3) {
        cout << "Wrong! You can choose only 1 or 2 or 3 " << endl;

    } else {
        switch (user_choice) {
            case 1:
                cout << "\nYou chose = ROCK";
                break;
            case 2:
                cout << "\nYou chose = PAPER";
                break;
            case 3:
                cout << "\nYou chose = SCISSORS";
                break;
        }
    }
    return user_choice;
}

void determine_winner(int user_choice, int comp_choice) {
    if (user_choice == comp_choice) {
        cout << "\nIt's a TIE! Play again\n" << endl;
    } else if ((user_choice == 1 && comp_choice == 3) ||
               (user_choice == 3 && comp_choice == 2) ||
               (user_choice == 2 && comp_choice == 1)) {
        cout << "\nCongratulations! YOU WON\n" << endl;
    } else {
        cout << "\nCOMPUTER WON\n" << endl;
    }
}

int main() {
    srand(time(0));
    int user = user_choice();
    int comp = computer_choice();
    determine_winner(user, comp);

    return 0;
}
