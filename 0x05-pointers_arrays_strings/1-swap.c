#include "main.h"
/**
 * swap_int - function that swaps the value of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: returns nothing
 */
void swap_int(int *a, int *b)
{
	/* local variable swp stores value of a */
	int swp = *a;

	*a = *b;
	*b = swp;
}
