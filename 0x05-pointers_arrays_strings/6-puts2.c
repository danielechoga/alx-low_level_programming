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
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
