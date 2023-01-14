#include "main.h"
int _strlen(char *s);
/**
 * _puts - function prints the second half of a string followed by a new line
 * @str: pointer to the string to be printed
 *
 * Return: Returns nothing
 */
void puts_half(char *str)
{
	int len;

	len = _strlen(str);
	if (len % 2 == 0)
	{
		while (*str != '\0')
		{
			if (*str >= *(str + (len / 2)))
				_putchar(*str);
			str++;
		}
	}
	else
	{
		while (*str != '\0')
		{
			if (*str >= *(str + (len - 1) / 2))
				_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}
/**
* _strlen - function returns the length of a string
* @s: pointer to string
*
* Return: return len
*/
int _strlen(char *s)
{
	/* variable to count string length */
	int i;
	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
