#include "main.h"

/**
 * print_triangle - prints a triangle of a given size
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
    int row, spaces, hashes;

    if (size <= 0) /* If size is 0 or less, print a new line */
    {
        _putchar('\n');
        return;
    }

    for (row = 1; row <= size; row++) /* Loop through each row */
    {
        /* Print spaces */
        for (spaces = size - row; spaces > 0; spaces--)
        {
            _putchar(' ');
        }
        /* Print hashes */
        for (hashes = 1; hashes <= row; hashes++)
        {
            _putchar('#');
        }
        _putchar('\n'); /* Move to the next line after each row */
    }
}
