// Matrix.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int** createMatrix(int rows, int cols) {
    int** matrix = new int* [rows];
    matrix[0] = new int[rows * cols] {};
    for (int i = 1; i < rows; i++) {
        matrix[i] = matrix[i - 1] + cols;
    }
    return matrix;
}

void fillMatrix(int* matrix[], int rows, int cols) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % 101;
        }
    }
}

void printMatrix(int* matrix[], int rows, int cols) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }
}

void destroyMatrix(int* matrix[])
{
    delete[] matrix[0];
    delete[] matrix;
}

int main()
{
    srand(time(0));
    int** matrix = createMatrix(3, 5);
    fillMatrix(matrix, 3, 5);
    printMatrix(matrix, 3, 5);
    destroyMatrix(matrix);
}

