#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>
#include <string>
#include <iomanip>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

using namespace std;

enum Color {
    RED = 12, GREEN = 10, BLUE = 9, YELLOW = 14, WHITE = 15, CYAN = 11, MAGENTA = 13
};

void setColor(Color color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void resetColor() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
}

void reset_board();
void print_board();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void PrintWinner(char winner);

//---------------
void printLogo();
void printCenteredBox(string text, Color borderColor = WHITE, Color textColor = WHITE);
void printCenteredText(string text, Color textColor = WHITE);
int getConsoleWidth();

int main()
{
    char winner = ' ';
    char response;
    do
    {
        winner = ' ';
        response = ' ';
        reset_board();
        while(winner == ' ' && checkFreeSpaces()!=0)
        {
            system("cls");
            printLogo();
            print_board();
            playerMove();
            winner=checkWinner();
            if(winner !=' ' || checkFreeSpaces()==0)
            {
                break;
            }
            computerMove();
            winner=checkWinner();
            if(winner !=' ' || checkFreeSpaces()==0)
            {
                break;
            }
        }
        system("cls");
        printLogo();
        print_board();
        PrintWinner(winner);
        printCenteredBox("Play Again?", YELLOW);
        printCenteredText("Would you like to play again? (Y/N): ", YELLOW);
        cin >> response;
        response = toupper(response);
    }
    while(response=='Y');
    system("cls");
    printLogo();
    printCenteredBox("Thank You!", GREEN);
    printCenteredText("Thanks for playing Tic-Tac-Toe!", GREEN);
    return 0;
}

void reset_board()
{
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            board[i][j]=' ';
}

void print_board()
{
    printCenteredBox("Game Board", CYAN);
    cout << "\n";
    for(int i=0; i<3; i++)
    {
        string row = "     ";
        for(int j=0; j<3; j++)
        {
            if(board[i][j] == PLAYER)
                row += " X ";
            else if(board[i][j] == COMPUTER)
                row += " O ";
            else
                row += "   ";
            
            if(j < 2) row += "|";
        }
        printCenteredText(row, WHITE);
        if(i < 2) printCenteredText("     ---+---+---", YELLOW);
    }
    cout << "\n";
}

int checkFreeSpaces()
{
    int FreeSpaces = 9;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(board[i][j] !=' ')
                FreeSpaces--;
    return FreeSpaces;
}

void playerMove()
{
    int x,y;
    do
    {
        printCenteredBox("Your Turn", CYAN);
        printCenteredText("Enter ROW# (1-3) and COLUMN# (1-3): ", CYAN);
        cin >> x >> y;
        x--; y--;
        if(x < 0 || x > 2 || y < 0 || y > 2 || board[x][y]!=' ')
        {
            printCenteredText("Invalid move! Try again.", RED);
            Sleep(1000);
        }
        else
        {
            board[x][y]=PLAYER;
            break;
        }
    }
    while(true);
}

void computerMove()
{
    srand(time(0));
    int x,y;
    if(checkFreeSpaces()>0)
    {
        do
        {
            x=rand()%3;
            y=rand()%3;
        }
        while(board[x][y] !=' ');
        printCenteredBox("Computer's Turn", MAGENTA);
        printCenteredText("Computer is thinking", MAGENTA);
        for(int i=0; i<3; i++) {
            cout << ".";
            cout.flush();
            Sleep(500);
        }
        cout << "\n";
        board[x][y]=COMPUTER;
    }
    else
    {
        PrintWinner(' ');
    }
}

char checkWinner()
{
    for(int i=0; i<3; i++)
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
            return board[i][0];
    
    for(int i=0; i<3; i++)
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ')
            return board[0][i];
    
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
        return board[0][0];
    
    if(board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ')
        return board[0][2];
    
    return ' ';
}

void PrintWinner(char winner)
{
    if(winner==PLAYER)
    {
        printCenteredBox("You Win!", GREEN);
        printCenteredText("Congratulations! You've beaten the computer!", GREEN);
    }
    else if(winner==COMPUTER)
    {
        printCenteredBox("Computer Wins!", RED);
        printCenteredText("Oh no! The computer has won this time.", RED);
    }
    else
    {
        printCenteredBox("It's a Tie!", YELLOW);
        printCenteredText("It's a draw! Great minds think alike.", YELLOW);
    }
}

void printLogo()
{
    string logo[] = {
        "   _____ _     _____         _____         ",
        "  |_   _(_) __|_   _|_ _  __|_   _|__  ___ ",
        "    | | | |/ __|| |/ _` |/ __|| |/ _ \\/ _ \\",
        "    | | | | (__ | | (_| | (__ | |  __/  __/",
        "    |_| |_|\\___||_|\\__,_|\\___||_|\\___|___|"
    };
    
    for (const auto& line : logo) {
        printCenteredText(line, CYAN);
    }
    cout << "\n";
}

void printCenteredBox(string text, Color borderColor, Color textColor)
{
    int width = getConsoleWidth();
    int boxWidth = min(width, max(40, (int)text.length() + 4));
    int padding = (width - boxWidth) / 2;
    
    setColor(borderColor);
    cout << setw(padding) << "" << string(boxWidth, '*') << '\n';
    cout << setw(padding) << "" << '*' << setw(boxWidth-2) << "" << "*\n";
    
    setColor(textColor);
    cout << setw(padding) << "" << '*' << setw((boxWidth-text.length())/2) << "" << text;
    cout << setw(boxWidth - (boxWidth+text.length())/2 - 1) << "" << "*\n";
    
    setColor(borderColor);
    cout << setw(padding) << "" << '*' << setw(boxWidth-2) << "" << "*\n";
    cout << setw(padding) << "" << string(boxWidth, '*') << '\n';
    resetColor();
}

void printCenteredText(string text, Color textColor)
{
    int width = getConsoleWidth();
    int padding = (width - text.length()) / 2;
    setColor(textColor);
    cout << setw(padding + text.length()) << text << '\n';
    resetColor();
}

int getConsoleWidth() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    return csbi.srWindow.Right - csbi.srWindow.Left + 1;
}