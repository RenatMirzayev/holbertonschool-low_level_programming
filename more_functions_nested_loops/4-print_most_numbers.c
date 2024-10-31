#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
    int i; /* Declare i before the loop */
    for (i = 0; i <= 9; i++) /* Use a C89 style for loop */
    {
        if (i != 2 && i != 4) /* Skip 2 and 4 */
        {
            _putchar(i + '0'); /* Convert int to char */
        }
    }
    _putchar('\n'); /* Print a new line at the end */
}
