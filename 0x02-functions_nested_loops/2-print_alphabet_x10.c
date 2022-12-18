#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 * followed by new line
 *
 * Return: returns nothing
 */
void print_alphabet_x10(void)
{
	int i, j;
	/* iterate through 10 lines*/
	for (i = 0; i < 11; i++)
	{
		/* iterate throough alphabet */
		for (j = 'a'; j <= 'z'; j++)
		{
			/* print to std output */
			_putchar(j);
		}
		_putchar('\n');
	}
}
