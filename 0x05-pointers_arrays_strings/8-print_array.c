#include "main.h"
#include <stdio.h>
/**
 * print_array - function prints n elements of
 * an array of integers
 * @a: pointer to array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i;
	/* iterate through n number of elements */
	for (i = 1; i <= n; i++)
		if (i != n)
			printf("%d, ", *(a + (i - 1)));
	/* to avoid a comma and space after the last element */
		else
			printf("%d", *(a + (i - 1)));
	printf("\n");
}
