#include "main.h"

/**
 * print_square - prints a square of size 'size'
 * @size: The size of the square
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)  /* If size is 0 or less */
	{
		_putchar('\n');  /* Print just a newline */
	}
	else
	{
		for (i = 0; i < size; i++)  /* Loop for each row */
		{
			for (j = 0; j < size; j++)  /* Loop for each column */
			{
				_putchar('#');  /* Print the '#' character */
			}
			_putchar('\n');  /* Print newline at the end of each row */
		}
	}
}
