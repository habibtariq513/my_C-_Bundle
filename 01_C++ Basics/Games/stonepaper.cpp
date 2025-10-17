#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int computerChoice()
{
    int comp_choice=rand()%3+1;
    if (comp_choice == 1)
    {
        cout << "\n\nComputer chose = ROCK\n";
    }
    else if (comp_choice == 2)
    {
        cout << "\n\nComputer chose = PAPER\n";
    }
    else if (comp_choice == 3)
    {
        cout << "\n\nComputer chose = SCISSORS\n";
    }

    return comp_choice;
}
int user_choice()
{
    int user_choice;
    cout<<"Press 1 for ROCK.\n"<<endl;
    cout<<"Press 2 for PAPER.\n"<<endl;
    cout<<"Press 3 for SCISSORS.\n"<<endl;
    cout<<"Enter your CHOICE = ";
    cin>>user_choice;
    if(user_choice!=1 && user_choice!=2 && user_choice!=3)
    {
        cout<<"Wrong! You can choose only 1 or 2 or 3 "<<endl;
    }
    else
    {
        switch(user_choice)
        {
        case 1:
            cout<<"\nYou chose = ROCK";
            break;
        case 2:
            cout<<"\nYou chose = PAPER";
            break;
        case 3:
            cout<<"\nYou chose = SCISSORS";
            break;
        }
    }
    return user_choice;
}
int win(int user_choice,int comp_choice)
{
    if(user_choice==comp_choice)
    {
        cout<<"\nits a TIE play again\n"<<endl;
    }
    else
    {
        if((user_choice==1 && comp_choice==3)||(user_choice==3 && comp_choice==2)||(user_choice==2 && comp_choice==1))
        {
            cout<<"\nCongrats! ANNAS YOU HAVE WON THE MATCH"<<endl;
        }
        else
        {
            cout<<"\nCOMPUTER WON\n ";
        }
    }
}
int main()
{
    srand(time(0));
    int user= user_choice();
    int comp=computerChoice();
    win(user,comp);
    return 0;
}
