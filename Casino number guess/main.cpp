#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
void rules();
int main()
{
    string playerName;
    int balance;
    int bettingAmount;
    int guess;
    int dice;
    char choice;
    srand(time(0));
    cout << "========WELCOME TO CASINO WORLD=======" << endl;
    cout << "What's your Name : ";
    getline(cin, playerName);
    cout << "Enter the starting balance to play game : $";
    cin >> balance;
    do
    {
        system("cls");
        rules();
        cout << "Your current balance is $ " << balance << endl;
        do
        {
            cout << "Hey, " << playerName<<", enter amount to bet : $";
            cin >> bettingAmount;
            if(bettingAmount > balance || bettingAmount < 0)
                cout << "Invalid Betting Amount\n"
                       <<"\nRe-enter balance\n ";
        }while(bettingAmount > balance);
        do
        {
            cout << "Guess any betting number between 1 & 10 :";
            cin >> guess;
            if(guess <= 0 || guess > 10)
                cout << "\nNumber should be between 1 to 10\n"
                    <<"Re-enter number:\n ";
        }while(guess <= 0 || guess > 10);
        dice = rand()%10 + 1;
        if(dice == guess)
        {
            cout << "You are in luck!! You have won Rs." << bettingAmount * 10;
            balance = balance + bettingAmount * 10;
        }
        else
        {
            cout << "Oops, better luck next time !! You lost $ "<< bettingAmount << endl;
            balance = balance - bettingAmount;
        }
        cout << "The winning number was : " << dice << endl;
        cout <<playerName<<", You have balance of $ " << balance << endl;
        if(balance == 0)
        {
            cout << "You have no money to play ";
            break;
        }
        cout << "-->Do you want to play again (y/n)? ";
        cin >> choice;
    }while(choice =='Y'|| choice=='y');
    cout << "Thanks for playing the game. Your balance is $ " << balance << endl;
    return 0;
}
void rules()
{
    system("cls");
    cout << "======CASINO NUMBER GUESSING RULES!======" << endl;
    cout << "1. Choose a number between 1 to 10" << endl;
    cout << "2. Winner gets 10 times of the money bet" << endl;
    cout << "3. Wrong bet, and you lose the amount you bet" << endl;
}
