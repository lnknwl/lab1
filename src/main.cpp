#include <iostream>
#include <windows.h>
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"

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
}

/**
 * @brief Запускает третье задание
 */
void runTask3()
{
    int size{};

    std::cout << "Введите размер массива: ";
    std::cin >> size;

    if (size < 3)
    {
        std::cout << "Размер массива должен быть не меньше 3\n";
        return;
    }

    SafeArray myArr = createArray(size);

    std::cout << "Введите " << size << " целых чисел:\n";

    for (int i = 0; i < size; ++i)
    {
        std::cin >> getElement(myArr, i);
    }

    std::cout << "Исходный массив:\n";
    printSafe(myArr);

    getElement(myArr, 2) = 999;

    std::cout << "После изменения элемента с индексом 2:\n";
    printSafe(myArr);

    int newSize{};

    std::cout << "Введите новый размер массива: ";
    std::cin >> newSize;

    reSizeArray(myArr, myArr.size, newSize);

    std::cout << "Массив после изменения размера:\n";
    printSafe(myArr);

    delete[] myArr.data;
    myArr.data = nullptr;
    myArr.size = 0;
}

/**
 * @brief Запускает четвертое задание
 */
void runTask4()
{
    int rows{};
    int cols{};

    std::cout << "Введите количество студентов: ";
    std::cin >> rows;

    std::cout << "Введите количество оценок у каждого студента: ";
    std::cin >> cols;

    if (rows <= 0 || cols <= 0)
    {
        std::cout << "Размеры матрицы должны быть больше нуля\n";
        return;
    }

    int** matrix = allocateMatrix(rows, cols);

    if (matrix == nullptr)
    {
        std::cout << "Не удалось создать матрицу\n";
        return;
    }

    fillMatrix(matrix, rows, cols);

    printMatrix(matrix, rows, cols);

    printMatrix(matrix, rows, cols, false);

    printMatrix(
        matrix,
        rows,
        cols,
        true,
        "Оценки студентов");

    freeMatrix(matrix, rows);
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
    std::cout << "3 - Задание 3\n";
    std::cout << "4 - Задание 4\n";
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

        case 3:
            runTask3();
            break;

        case 4:
            runTask4();
            break;

        default:
            std::cout << "Неверный номер задания\n";
            break;
    }

    return 0;
}