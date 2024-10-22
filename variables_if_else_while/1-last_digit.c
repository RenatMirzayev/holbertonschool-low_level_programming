#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

    // Initialize random number generator
    srand(time(0));
    n = rand() - RAND_MAX / 2; // Assign a random number to n

    int last_digit = n % 10; // Get the last digit of n

    // Print the last digit of n
    printf("Last digit of %d is %d", n, last_digit);

    // Determine the condition for the last digit
    if (last_digit > 5)
    {
        printf(" and is greater than 5\n");
    }
    else if (last_digit == 0)
    {
        printf(" and is 0\n");
    }
    else // last_digit is less than 6 and not 0
    {
        printf(" and is less than 6 and not 0\n");
    }

    return 0;
}
