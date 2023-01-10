#include "main.h"
/**
 * _puts - function prints a string followed by a new line
 * @str: pointer to the string to be printed
 *
 * Return: Returns nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

