#include "main.h"
int string_len(char *l);
/**
 * rev_string - function reverses a string
 * @s: pointer to string to be manipulated
 *
 * Return: returns nothing
 */
void rev_string(char *s)
{
	int i, len;
	/* end_str points to end  string */
	/* begin_str points to begining of string */
	char *end_str, *begin_str, temp;

	len = string_len(s); /* store length of string */
	begin_str = s; /* set begin_str to first character */
	end_str = s + (len - 1); /* set end_str to last character */

	/* swap end string with begining string and iterate */
	/* both ends till they reach the middle */
	for (i = 0; i <= (len - 1) / 2; i++)
	{
		temp = *end_str;
		*end_str = *begin_str;
		*begin_str = temp;

		begin_str++;
		end_str--;
	}
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
