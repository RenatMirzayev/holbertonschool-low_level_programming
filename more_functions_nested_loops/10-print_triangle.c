#include "main.h"

void print_triangle(int size)
{
    int row, space, hash;

    if (size <= 0)
    {
        _putchar('\n'); /* Print a new line if size is 0 or less */
        return;
    }

    for (row = 1; row <= size; row++)
    {
        for (space = size - row; space > 0; space--)
        {
            _putchar(' '); /* Print spaces */
        }
        for (hash = 1; hash <= row; hash++)
        {
            _putchar('#'); /* Print hashes */
        }
        _putchar('\n'); /* Move to the next line */
    }
}
