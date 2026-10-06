#ifndef TASK1_H
#define TASK1_H

constexpr int ARRAY_SIZE = 10;

/**
 * @brief Заполняет массив числами с клавиатуры
 *
 * @param arr Массив из 10 целых чисел
 */
void fillArray(int (&arr)[ARRAY_SIZE]);

/**
 * @brief Выводит массив на экран
 *
 * @param arr Массив из 10 целых чисел
 */
void printArray(const int (&arr)[ARRAY_SIZE]);

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
    const int& secondIndex);

/**
 * @brief Умножает все элементы массива на два
 *
 * @param arr Массив из 10 целых чисел
 */
void multiplyByTwo(int (&arr)[ARRAY_SIZE]);

#endif