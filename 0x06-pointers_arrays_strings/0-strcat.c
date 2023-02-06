#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: main string
 * @src: appended string
 *
 * Return: return pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr;
	int k = 1; /* for loop control */

	ptr = dest; /* point ptr to the string dest */

	/* increment pointer dest to null byte address */
	while (*dest != '\0')
	{
		dest++;
	}

	/* append src to dest starting from dest null byte location */
	while (k != 0)
	{
		*dest = *src;
		dest++;
		src++;

		/* include terminating null byte */
		if (*src == '\0')
		{
			*dest = *src;
			k = 0;
		}
	}
	return (ptr);
}
