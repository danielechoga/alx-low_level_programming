#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to string to be manipulated
 * Return: returns a character pointer
 */
char *cap_string(char *str)
{
	int i = 0;

	/* captalize first character of string */
	if (islower(str[0]))
		str[0] -= 32;


	while (str[i] != '\0')
	{
		/* identify word separator */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == ',' || str[i] == ';' ||
				str[i] == '.' || str[i] == '!' ||
				str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' ||
				str[i] == '{' || str[i] == '}')
		{
			/* capitalize character after word separator */
			if (islower(str[i + 1]))
				str[i + 1] -= 32; /* ASCII */
		}

		i++;
	}

	return (str);
}
