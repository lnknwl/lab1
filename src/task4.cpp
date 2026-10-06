#include <iostream>
#include <iomanip>
#include <string>
#include "task4.h"

/**
 * @brief Выделяет память под двумерный массив
 *
 * @param rows Количество строк
 * @param cols Количество столбцов
 * @return Указатель на созданный двумерный массив
 */
int** allocateMatrix(int rows, int cols)
{
    if (rows <= 0 || cols <= 0)
    {
        return nullptr;
    }

    int** matrix = new int*[rows];

    for (int i = 0; i < rows; ++i)
    {
        matrix[i] = new int[cols]{};
    }

    return matrix;
}

/**
 * @brief Заполняет двумерный массив с клавиатуры
 *
 * @param matrix Двумерный массив
 * @param rows Количество строк
 * @param cols Количество столбцов
 */
void fillMatrix(int** matrix, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        std::cout << "Введите оценки студента " << i + 1 << ":\n";

        for (int j = 0; j < cols; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }
}

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
    bool showBorders,
    std::string title)
{
    std::cout << '\n' << title << '\n';

    if (showBorders)
    {
        std::cout << '+'
                  << std::string(cols * 4 + 1, '-')
                  << "+\n";
    }

    for (int i = 0; i < rows; ++i)
    {
        if (showBorders)
        {
            std::cout << "| ";
        }

        for (int j = 0; j < cols; ++j)
        {
            std::cout << std::setw(3) << matrix[i][j] << ' ';
        }

        if (showBorders)
        {
            std::cout << '|';
        }

        std::cout << '\n';
    }

    if (showBorders)
    {
        std::cout << '+'
                  << std::string(cols * 4 + 1, '-')
                  << "+\n";
    }
}

/**
 * @brief Освобождает память двумерного массива
 *
 * @param matrix Двумерный массив
 * @param rows Количество строк
 */
void freeMatrix(int** matrix, int rows)
{
    for (int i = 0; i < rows; ++i)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
}