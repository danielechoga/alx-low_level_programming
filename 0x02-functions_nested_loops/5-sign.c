#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: number to be checked
 *
 * Return: returns 1 if positive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	/* declare variable i to hold return value */
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		i = -1;
		_putchar('-');
	}
	return (i);
}
