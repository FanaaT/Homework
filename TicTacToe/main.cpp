// TicTacToe.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "TicTacToe.h"

int main()
{
    init();

    while (!is_game_over()) {
        make_next_move();
    }
    print();
}

