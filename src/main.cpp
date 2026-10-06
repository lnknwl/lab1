#include <iostream>
#include <windows.h>
#include "task1.h"

/**
 * @brief Главная функция программы
 *
 * @return 0 если программа завершилась успешно
 */
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int numbers[ARRAY_SIZE]{};

    fillArray(numbers);

    std::cout << "Исходный массив:\n";
    printArray(numbers);

    int firstIndex{};
    int secondIndex{};

    std::cout << "Введите индексы двух элементов для обмена: ";
    std::cin >> firstIndex >> secondIndex;

    swapElements(numbers, firstIndex, secondIndex);

    std::cout << "После обмена:\n";
    printArray(numbers);

    multiplyByTwo(numbers);

    std::cout << "После умножения на два:\n";
    printArray(numbers);

    return 0;
}