#include "main.h"
#include <ctype.h>
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: pointer to string to be manipulated
 * Return: returns a character pointer
 */
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (islower(*str))
		{
			*str = *str - 32; /* ASCII */
		}
		str++;
	}
	return (str);
}
