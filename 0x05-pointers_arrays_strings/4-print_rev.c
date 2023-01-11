#include "main.h"
int string_len(char *l);
/**
 * print_rev - function prints a string in reverse
 * @s: pointer to string to be manipulated
 *
 * Return: returns nothing
 */
void print_rev(char *s)
{
	int len; /* to store the string length */
	int rev; /* to reduce string length from end to begining */

	len = string_len(s); /* call function string_len */
	/* iterate from the last string character to the first */
	for (rev = 1; rev <= len; rev++)
		_putchar(*(s + (len - rev)));
	_putchar('\n');
}
/**
 * string_len - returns the length of a string
 * @l: string to be counted
 *
 * Return: returns length of string
 */
int string_len(char *l)
{
	int len = 0; /* variable to hold count */

	while (*l != '\0')
	{
		len++;
		l++;
	}
	return (len);
}
