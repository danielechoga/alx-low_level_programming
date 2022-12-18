#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int letters, i;
	/* output aphabets 10 times */
	while (i < 11)
	{
	/* iterate through alphabets */
		for (letters = 'a'; letters <= 'z'; letters++)
		{
		/*print results to std out*/
			_putchar(letters);
		}
		i++;
		_putchar('\n');
	}
}
