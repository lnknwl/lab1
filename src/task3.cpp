#include <iostream>
#include "task3.h"

/**
 * @brief Создает динамический массив заданного размера
 *
 * @param size Размер массива
 * @return Структура SafeArray
 */
SafeArray createArray(int size)
{
    SafeArray arr{};

    if (size <= 0)
    {
        arr.data = nullptr;
        arr.size = 0;
        return arr;
    }

    arr.data = new int[size]{};
    arr.size = size;

    return arr;
}

/**
 * @brief Возвращает ссылку на элемент массива
 *
 * @param arr Массив
 * @param index Индекс элемента
 * @return Ссылка на элемент массива
 */
int& getElement(SafeArray& arr, int index)
{
    if (index < 0 || index >= arr.size)
    {
        std::cout << "Ошибка: индекс находится за границами массива\n";

        static int errorValue = 0;
        return errorValue;
    }

    return arr.data[index];
}

/**
 * @brief Выводит элементы массива
 *
 * @param arr Массив
 */
void printSafe(const SafeArray& arr)
{
    for (int i = 0; i < arr.size; ++i)
    {
        std::cout << arr.data[i] << ' ';
    }

    std::cout << '\n';
}

/**
 * @brief Изменяет размер массива
 *
 * @param arr Массив
 * @param N Текущий размер массива
 * @param M Новый размер массива
 */
void reSizeArray(SafeArray& arr, int N, int M)
{
    if (M <= 0)
    {
        std::cout << "Размер массива должен быть больше нуля\n";
        return;
    }

    if (M < N)
    {
        std::cout << "Удаленные элементы: ";

        for (int i = M; i < N; ++i)
        {
            std::cout << arr.data[i] << ' ';
        }

        std::cout << '\n';
    }

    int* newData = new int[M]{};

    int copySize = N < M ? N : M;

    for (int i = 0; i < copySize; ++i)
    {
        newData[i] = arr.data[i];
    }

    delete[] arr.data;

    arr.data = newData;
    arr.size = M;
}