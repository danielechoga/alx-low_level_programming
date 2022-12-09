#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assigns random number n
 * and prints out last_digit of number
 * also comapares last_digit with a few conditionals
 * Return: returns zero
 */
int main(void)
{
	int n;
	int last_digit;
    /* Generate random number */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* get last digit of n */
	last_digit = n % 10;
	/* output */
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else if ((last_digit < 6) && (last_digit != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n"
				, n, last_digit);
	}
	return (0);
}
