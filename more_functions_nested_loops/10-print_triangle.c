#include "main.h"

/**
 * print_triangle - Prints a triangle of '#' characters.
 * @size: The size of the triangle.
 *
 * Description: If size is 0 or less, the function prints only a new line.
 * Otherwise, it prints a right-angled triangle of '#' characters
 * with the specified size, aligned to the right.
 */
void print_triangle(int size)
{
    int row, spaces;

    if (size <= 0)
    {
        _putchar('\n'); /* Print a new line if size is 0 or less */
        return;
    }

    for (row = 1; row <= size; row++) /* Loop through each row */
    {
        for (spaces = size - row; spaces > 0; spaces--) /* Print spaces */
        {
            _putchar(' ');
        }
        for (int hashes = 1; hashes <= row; hashes++) /* Print hashes */
        {
            _putchar('#');
        }
        _putchar('\n'); /* Move to the next line */
    }
}
