#ifndef TASK3_H
#define TASK3_H

/**
 * @brief Структура для хранения динамического массива
 */
struct SafeArray
{
    int* data;
    int size;
};

/**
 * @brief Создает динамический массив заданного размера
 *
 * @param size Размер массива
 * @return Структура SafeArray
 */
SafeArray createArray(int size);

/**
 * @brief Возвращает ссылку на элемент массива
 *
 * @param arr Массив
 * @param index Индекс элемента
 * @return Ссылка на элемент массива
 */
int& getElement(SafeArray& arr, int index);

/**
 * @brief Выводит элементы массива
 *
 * @param arr Массив
 */
void printSafe(const SafeArray& arr);

/**
 * @brief Изменяет размер массива
 *
 * @param arr Массив
 * @param N Текущий размер массива
 * @param M Новый размер массива
 */
void reSizeArray(SafeArray& arr, int N, int M);

#endif