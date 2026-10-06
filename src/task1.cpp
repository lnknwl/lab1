#include <iostream>
#include "task1.h"

/**
 * @brief Заполняет массив числами с клавиатуры
 *
 * @param arr Массив из 10 целых чисел
 */
void fillArray(int (&arr)[ARRAY_SIZE])
{
    std::cout << "Введите " << ARRAY_SIZE << " целых чисел:\n";

    for (int& element : arr)
    {
        std::cin >> element;
    }
}

/**
 * @brief Выводит массив на экран
 *
 * @param arr Массив из 10 целых чисел
 */
void printArray(const int (&arr)[ARRAY_SIZE])
{
    for (const auto& element : arr)
    {
        std::cout << element << ' ';
    }

    std::cout << '\n';
}

/**
 * @brief Меняет местами два элемента массива
 *
 * @param arr Массив из 10 целых чисел
 * @param firstIndex Индекс первого элемента
 * @param secondIndex Индекс второго элемента
 */
void swapElements(
    int (&arr)[ARRAY_SIZE],
    const int& firstIndex,
    const int& secondIndex)
{
    if (firstIndex < 0 || firstIndex >= ARRAY_SIZE ||
        secondIndex < 0 || secondIndex >= ARRAY_SIZE)
    {
        std::cout << "Ошибка: индекс находится за границами массива\n";
        return;
    }

    int temp = arr[firstIndex];
    arr[firstIndex] = arr[secondIndex];
    arr[secondIndex] = temp;
}

/**
 * @brief Умножает все элементы массива на два
 *
 * @param arr Массив из 10 целых чисел
 */
void multiplyByTwo(int (&arr)[ARRAY_SIZE])
{
    for (int& element : arr)
    {
        element *= 2;
    }
}