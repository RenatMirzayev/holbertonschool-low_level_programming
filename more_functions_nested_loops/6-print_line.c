#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: The number of times to print the character '_'
 */
void print_line(int n)
{
    int i;  /* Declare the loop variable here */

    if (n <= 0)  /* If n is 0 or less */
    {
        _putchar('\n');  /* Print just a newline */
    }
    else
    {
        for (i = 0; i < n; i++)  /* Loop n times */
        {
            _putchar('_');  /* Print the '_' character */
        }
        _putchar('\n');  /* Print newline at the end */
    }
}
