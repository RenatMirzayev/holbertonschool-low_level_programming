#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: The number of times to print the character '\'
 */
void print_diagonal(int n)
{
    int i, j;  /* Declare loop variables */

    if (n <= 0)  /* If n is 0 or less */
    {
        _putchar('\n');  /* Print just a newline */
    }
    else
    {
        for (i = 0; i < n; i++)  /* Loop for each line */
        {
            for (j = 0; j < i; j++)  /* Print spaces */
            {
                _putchar(' ');  /* Print a space */
            }
            _putchar('\\');  /* Print the diagonal character */
            _putchar('\n');  /* Print newline at the end */
        }
    }
}
