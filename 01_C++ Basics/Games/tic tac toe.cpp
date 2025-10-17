#include<iostream>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

using namespace std;

void reset_board();
void print_board();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void PrintWinner(char winner);

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
        print_board();
        PrintWinner(winner);
        cout<<"\n Would you like to play again? (Y/N) = ";
        \
        cin>>response;
        response = toupper(response);

    }
    while(response=='Y');

    cout<<"-- THANKS FOR PLAYING --";
    return 0;
}

void reset_board()
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            board[i][j]=' ';
        }
    }

}

void print_board()
{

    cout<<board[0][0] <<"  | " << board[0][1] <<" | " <<  board[0][2];
    cout<<"\n---|---|---\n";
    cout<<board[1][0] <<"  | " << board[1][1] <<" | " <<  board[1][2];
    cout<<"\n---|---|---\n";
    cout<<board[2][0] <<"  | " << board[2][1] <<" | " <<  board[2][2];
    cout<<"\n";

}
int checkFreeSpaces()
{
    int FreeSpaces = 9;
    for(int i =0 ; i<3 ; i++)
    {
        for(int j =0 ; j<3 ; j++)
        {
            if(board[i][j] !=' ')
            {
                FreeSpaces--;
            }
        }
    }
    return FreeSpaces;
}
void playerMove()
{
    int x,y;

    do
    {
        cout<<"Enter ROW# (1-3) = ";
        cin>>x;
        x--;

        cout<<"Enter COLUMN# (1-3) = ";
        cin>>y;
        y--;

        if(board[x][y]!=' ')
        {
            cout<<"STOP!!!!!!!   ITS AN INVALID MOVE \n";
        }
        else
        {
            board[x][y]=PLAYER;
            break;
        }

    }
    while(board[x][y]!=' ');
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

        board[x][y]=COMPUTER;
    }
    else
    {
        PrintWinner(' ');
    }

}
char checkWinner()
{
    //check ROWS
    for(int i=0; i<3; i++)
    {
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2] )
        {
            return board[i][0];
        }

    }

    //check COLUMNS
    for(int i=0; i<3; i++)
    {
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i] )
        {
            return board[0][i];
        }

    }

    //check DIAGONALS
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] )
    {
        return board[0][0];
    }
    if(board[0][2] == board[1][1] && board[0][2] == board[2][0] )
    {
        return board[0][2];
    }
    return ' ';
}
void PrintWinner(char winner)
{
    if(winner==PLAYER)
    {
        cout<<"CONGRATS!  YOU WIN";
    }
    else if(winner==PLAYER)
    {
        cout<<"ALAS!!!!    YOU LOSE ";
    }
    else
    {
        cout<<"IT'S A TIE";
    }
}
