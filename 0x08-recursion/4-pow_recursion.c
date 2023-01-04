#include "main.h"
/**
 * _pow_recursion - function return the value of x
 * raised to the power of y
 * @x: operand to be enumerated
 * @y: to be raised to the power of y
 *
 * Return: -1 or value of x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
