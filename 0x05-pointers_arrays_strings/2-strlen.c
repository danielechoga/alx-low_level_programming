#include "main.h"
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
