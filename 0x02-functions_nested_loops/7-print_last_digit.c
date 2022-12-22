#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: the number to be checked
 *
 * Return: returns last digit of n.
 */
int print_last_digit(int n)
{
	/* declare variable to hold return value */
	int last_digit, i;

	last_digit = n % 10;
	/* to print only absolute values (no negative numbers) */
	if (last_digit < 0)
	{
		i = _putchar('0' - last_digit);
	}
	else
	{
		i = _putchar('0' + last_digit);
	}
	return (i);
}
