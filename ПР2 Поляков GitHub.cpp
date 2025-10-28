#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    srand(time(0));

   
    int secret_number = rand() % 101;
    int user_guess;

    cout << "Угадай число от 0 до 100!" << endl;

    while (true)
    {
        cin >> user_guess;

        if (user_guess < secret_number)
        {
            cout << "Надо больше" << endl;
        }
        else if (user_guess > secret_number)
        {
            cout << "Надо меньше" << endl;
        }
        else
        {
            cout << "Угадал!" << endl;
            break;
        }
    }

    return 0;
}