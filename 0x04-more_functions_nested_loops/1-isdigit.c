#include "main.h"
/**
 * _isdigit - checks for a dgit (0 through 9)
 * @c: value to be checked
 *
 * Return: returns 0 or 1
 */
int _isdigit(int c)
{
	int digit;

	if (c <= '9')
		digit = 1;
	else
		digit = 0;
	return (digit);
}
