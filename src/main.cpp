#include <iostream>
#include <windows.h>
#include "task1.h"
#include "task2.h"

/**
 * @brief Запускает первое задание
 */
void runTask1()
{
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
}

/**
 * @brief Запускает второе задание
 */
void runTask2()
{
    int size{};

    std::cout << "Введите размер массива: ";
    std::cin >> size;

    if (size <= 0)
    {
        std::cout << "Размер массива должен быть больше нуля\n";
        return;
    }

    int* arr = new int[size]{};

    fillDynamicArray(arr, size);

    std::cout << "Исходный массив:\n";
    printDynamicArray(arr, size);

    int resultSize = size;

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < 0)
        {
            resultSize = i;
            break;
        }
    }

    process(arr, size);

    std::cout << "Результат:\n";
    printDynamicArray(arr, resultSize);

    delete[] arr;
    arr = nullptr;

    std::cout << "Память освобождена, указатель обнулен\n";

    if (arr == nullptr)
    {
        std::cout << "Указатель равен nullptr, обращение к памяти не выполняется\n";
    }
}

/**
 * @brief Главная функция программы
 *
 * @return 0 если программа завершилась успешно
 */
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int choice{};

    std::cout << "Лабораторная работа №1\n";
    std::cout << "1 - Задание 1\n";
    std::cout << "2 - Задание 2\n";
    std::cout << "Выберите задание: ";
    std::cin >> choice;

    switch (choice)
    {
        case 1:
            runTask1();
            break;

        case 2:
            runTask2();
            break;

        default:
            std::cout << "Неверный номер задания\n";
            break;
    }

    return 0;
}