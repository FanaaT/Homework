#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void print(T* source_begin, T* source_end)
{
    while (source_begin != source_end)
    {
        std::cout << *source_begin << ' ';
        ++source_begin;
    }
    std::cout << '\n';
}

int main()
{
    double d = 74.9;
    double g = 1.1;
    swap(d, g);
    std::cout << d << ' ' << g;

    std::cout << '\n';

    int arr1[3] = { 123, 3, 25 };
    double arr2[5] = { 123.1, 3.44, 25, 1, -0.555 };
    print(arr1, (arr1 + 3));
    print(arr2, (arr2 + 5));
}

