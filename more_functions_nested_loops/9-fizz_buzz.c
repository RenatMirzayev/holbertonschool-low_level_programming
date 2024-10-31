#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100,
 *        but for multiples of three prints Fizz
 *        instead of the number and for the multiples
 *        of five prints Buzz. For numbers which are
 *        multiples of both three and five prints FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i; /* Declare the loop variable here */

	for (i = 1; i <= 100; i++) /* Loop from 1 to 100 */
	{
		if (i % 3 == 0 && i % 5 == 0) /* Check for multiples of both 3 and 5 */
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0) /* Check for multiples of 3 */
		{
			printf("Fizz");
		}
		else if (i % 5 == 0) /* Check for multiples of 5 */
		{
			printf("Buzz");
		}
		else /* For all other numbers */
		{
			printf("%d", i);
		}
		if (i < 100) /* Add a space after each number/word except for the last one */
		{
			printf(" ");
		}
	}
	printf("\n"); /* Print a new line at the end */
	return (0);
}
