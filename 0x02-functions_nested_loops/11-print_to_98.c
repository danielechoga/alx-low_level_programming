#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * @n: number to begin printing from
 */
void print_to_98(int n)
{
	int m;

	if (n <= 98)
	{
		for (m = n; m <= 98; m++)
		{
			printf("%d", m);
			if (m < 98)
				printf(", ");
		}
		putchar('\n');
	}
	else if (n > 98)
	{
		for (m = n; m >= 98; m--)
		{
			printf("%d", m);
			if (m > 98)
				printf(", ");
		}
		putchar('\n');
	}
}
