#include <iostream>
#include <cstring>
#include "Calc.library.h"
using std::cout;
using std::cin;

void run() {
	char buffer[500];

	cout << "Введите 'exit' для выхода.\n";

	while (true) {
		cout << "Введите выражение: ";
		cin.getline(buffer, sizeof(buffer));
		cout << buffer << '\n';
		if (strncmp("exit", buffer, 4) == 0)
			break;
		cout << "Результат: " << calculate(buffer) << '\n';
	}
}

int main()
{
	setlocale(LC_ALL, "ru_RU");
	run();
}