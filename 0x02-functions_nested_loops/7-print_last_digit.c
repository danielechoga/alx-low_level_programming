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
	int last_digit, r;

	last_digit = n % 10;
	/* to print only absolute values (no negative numbers) */
	if (last_digit > 0)
		_putchar('0' + last_digit);
	else
		_putchar('0' - last_digit);
	r = _abs(last_digit);
	return (r);
}
/**
 * _abs - computes the absolute value of an integer
 * @n: interger to be checked
 *
 * Return: returns i
 */
int _abs(int n)
{
	int i;
	
	if (n < 0)
		i = -n;
	else
		i = n;
	return (i);
}
