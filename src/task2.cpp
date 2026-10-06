#include <iostream>
#include "task2.h"

/**
 * @brief Заполняет динамический массив с клавиатуры
 *
 * @param arr Указатель на динамический массив
 * @param size Размер массива
 */
void fillDynamicArray(int* arr, int size)
{
    std::cout << "Введите " << size << " целых чисел:\n";

    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }
}

/**
 * @brief Выводит динамический массив на экран
 *
 * @param arr Указатель на динамический массив
 * @param size Размер массива
 */
void printDynamicArray(const int* arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << ' ';
    }

    std::cout << '\n';
}

/**
 * @brief Создает новый массив из элементов до первого отрицательного
 *
 * @param arr Ссылка на указатель на динамический массив
 * @param size Размер исходного массива
 */
void process(int*& arr, int size)
{
    int negativeIndex = -1;

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < 0)
        {
            negativeIndex = i;
            break;
        }
    }

    if (negativeIndex == -1)
    {
        return;
    }

    int* newArray = new int[negativeIndex]{};

    for (int i = 0; i < negativeIndex; ++i)
    {
        newArray[i] = arr[i];
    }

    delete[] arr;
    arr = newArray;
}