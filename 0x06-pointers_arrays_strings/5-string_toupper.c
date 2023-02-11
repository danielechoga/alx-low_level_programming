#include "main.h"
#include <ctype.h>
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: pointer to string to be manipulated
 * Return: returns a character pointer
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (islower(str[i]))
			str[i] -= 32; /* ASCII */
		i++;
	}

	return (str);
}
