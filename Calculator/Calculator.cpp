// Calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Calc.library.h"

using namespace std;

void run() {
    char buffer[500];

    while (true)
    {
        cout << "Enter expression: ";
        cin.getline(buffer, sizeof(buffer));
        if (strncmp("exit", buffer, 4) == 0)
            break;
        cout << "Result: " << calculate(buffer) << '\n';
    }
}

int main()
{
    run();
}

