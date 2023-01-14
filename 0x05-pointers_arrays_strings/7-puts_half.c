#include "main.h"
int _strlen(char *s);
/**
 * puts_half - function prints the second half of a string
 * followed by a new line
 * @str: pointer to the string to be printed
 *
 * Return: Returns nothing
 */
void puts_half(char *str)
{
	int i, j, len;

	/* length of string */
	len = _strlen(str);
	/* for even condition */
	if (len % 2 == 0)
	{
	/* iterate through strng using string length */
		for (i = 0; i < len; i++)
		{
		/* send half of string length to output */
			if (i >= len / 2)
				_putchar(*(str + i));
		}
	}
	else /* if odd */
	{
	/* iterate through string using string length */
		for (j = 0; j < len; j++)
		{
		/* send one less of half the string length */
			if (j > (len - 1) / 2)
				_putchar(*(str + j));
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
