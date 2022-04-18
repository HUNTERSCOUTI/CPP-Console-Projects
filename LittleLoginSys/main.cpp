#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    string username, password, un, pw;
    char answer;


    cout << "Please Register before logging in" << endl;
    cout << "Set a username: ";
    cin >> username;
    cout << "Set a password: ";
    cin >> password;
    cout << "Success! Would you like to proceed to login? y/n" << endl;
    cin >> answer;

    if(answer == 'y')
    {
        cout << "Please enter username: ";
        cin >> un;
        if(un == username)
        {
            cout << "Please enter password: ";
            cin >> pw;
            if(pw == password)
            {
                cout << "Welcome, would you like to get started?";
                return 0;
            }
            else
            {
                cout << "WRONG";
            }
        }
        else
        {
            cout << "WRONG";
        }
    }
    else if(answer == 'n')
    {
        cout << "Fine then...\nThank you for registering.";
    }
    else
    {
        cout << "INVALID INPUT" << endl;
        cout << "Exiting.";
        return 0;
    }
}

