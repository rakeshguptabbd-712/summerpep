#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main()
{
    char pass[30] = "admin123";
    char pass1[30];
    int i = 0;
    char ch;

    cout << "Enter Password: ";

    do
    {
        ch = getch();

        if(ch != '\r')
        {
            cout << "*";
            pass1[i++] = ch;
        }
    } while(ch != '\r');

    pass1[i] = '\0';

    if(strcmp(pass, pass1) == 0)
        cout << "\nWelcome...";
    else
        cout << "\nWrong Password!";

    return 0;
}