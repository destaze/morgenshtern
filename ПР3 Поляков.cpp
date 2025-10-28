#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int num1;
    int num2;
    int result;

   
    cout << "Таблица умножения:" << endl << endl;

    for (num1 = 1; num1 <= 9; num1++)
    {
        for (num2 = 1; num2 <= 9; num2++)
        {
            result = num1 * num2;
            cout << result << " ";
        }
        cout << endl;
    }

    cout << endl;
    
    
    int num;
    int num_now;

    cout << "Поиск делителя. Введите число: ";
    cin >> num;

    cout << "Делители числа " << num << ": ";

    for (num_now = 1; num_now <= num; num_now = num_now + 1)
    {
        if (num % num_now == 0)
        {
            cout << num_now << " ";
        }
    }

    cout << endl;

    return 0;
}