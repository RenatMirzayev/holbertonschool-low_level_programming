#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: The number of times to print the character '\'
 */
void print_diagonal(int n)
{
    int i, j;

    if (n <= 0)  /* If n is 0 or less */
    {
        _putchar('\n');  /* Print just a newline */
    }
    else
    {
        for (i = 0; i < n; i++)  /* Loop n times */
        {
            for (j = 0; j < i; j++)
            {
                _putchar(' ');  /* Print spaces for the diagonal */
            }
            _putchar('\\');  /* Print the diagonal character */
            _putchar('\n');  /* Print newline at the end of each line */
        }
    }
}
