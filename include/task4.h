#ifndef TASK4_H
#define TASK4_H

#include <string>

/**
 * @brief Выделяет память под двумерный массив
 *
 * @param rows Количество строк
 * @param cols Количество столбцов
 * @return Указатель на созданный двумерный массив
 */
int** allocateMatrix(int rows, int cols);

/**
 * @brief Заполняет двумерный массив с клавиатуры
 *
 * @param matrix Двумерный массив
 * @param rows Количество строк
 * @param cols Количество столбцов
 */
void fillMatrix(int** matrix, int rows, int cols);

/**
 * @brief Выводит двумерный массив
 *
 * @param matrix Двумерный массив
 * @param rows Количество строк
 * @param cols Количество столбцов
 * @param showBorders Показывать рамку вокруг матрицы
 * @param title Заголовок матрицы
 */
void printMatrix(
    int** matrix,
    int rows,
    int cols,
    bool showBorders = true,
    std::string title = "Matrix");

/**
 * @brief Освобождает память двумерного массива
 *
 * @param matrix Двумерный массив
 * @param rows Количество строк
 */
void freeMatrix(int** matrix, int rows);

#endif