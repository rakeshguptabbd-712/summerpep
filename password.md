#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char pass[] = "admin123";
    char pass1[30];
    int i = 0;
    char ch;

    cout << "Enter Password: ";

    while ((ch = getch()) != '\r')
    {
        if (ch == '\b')   // Backspace key
        {
            if (i > 0)
            {
                i--;
                cout << "\b \b";   // erase one *
            }
        }
        else
        {
            pass1[i++] = ch;
            cout << "*";
        }
    }

    pass1[i] = '\0';

    if (strcmp(pass, pass1) == 0)
        cout << "\nWelcome...";
    else
        cout << "\nWrong Password!";

    return 0;
}
