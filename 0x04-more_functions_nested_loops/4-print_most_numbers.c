#include "main.h"
/**
 * print_numbers - function prints numbers 0-9 except 2 and 4
 *
 */
void print_most_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		if ((i != '2') && (i != '4'))
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
