#ifndef TASK2_H
#define TASK2_H

/**
 * @brief Заполняет динамический массив с клавиатуры
 *
 * @param arr Указатель на динамический массив
 * @param size Размер массива
 */
void fillDynamicArray(int* arr, int size);

/**
 * @brief Выводит динамический массив на экран
 *
 * @param arr Указатель на динамический массив
 * @param size Размер массива
 */
void printDynamicArray(const int* arr, int size);

/**
 * @brief Обрезает массив до первого отрицательного элемента
 *
 * @param arr Ссылка на указатель на динамический массив
 * @param size Размер исходного массива
 */
void process(int*& arr, int size);

#endif