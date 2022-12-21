#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: interger to be checked
 *
 * Return: returns i
 */
int _abs(int n)
{
	int i;
	/* i is value to be returned */
	if (n < 0)
		i = -n;
	else
		i = n;
	return (i);
}
