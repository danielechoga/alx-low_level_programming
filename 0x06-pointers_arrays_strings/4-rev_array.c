#include "main.h"
/**
 * reverse_array - function reverses the content of an array of integers
 * @a: pointer to array of integers
 * @n: number of elements in the array
 *
 * Return: returns nothing
 */

void reverse_array(int *a, int n)
{
	int *begin, *end, temp;
	int i;

	begin = a;
	end = a + (n - 1);

	for (i = 0; i <= (n / 2); i++)
	{
		temp = *begin;
		*begin = *end;
		*end = temp;

		begin++;
		end--;
	}
}
