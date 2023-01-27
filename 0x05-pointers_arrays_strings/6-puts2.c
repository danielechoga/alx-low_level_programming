#include "main.h"
/**
 * puts2 - prints every second character of a string
 * starting with the first character
 * @str: string to evaluate
 *
 * Return: returns nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (*(str + i) != '\0')
		{
			if (i % 2 == 0)
				_putchar(*(str + i));
			i++;
		}
		else
			i = -1;
	}
	_putchar('\n');
}
