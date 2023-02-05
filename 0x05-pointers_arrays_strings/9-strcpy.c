#include "main.h"
/**
 * _strcpy - function copies a string
 * @dest: destination of copied string
 * @src: pointer tp string to be copied
 *
 * Return: return the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		/*
		 * store each string *(src + i) into
		 * each space of dest + i
		 */
		dest[i] = src[i];

		/*
		 * terminate loop after null character has been
		 * stored into dest + i
		 */
		if (src[i] != '\0')
			i++;
		else
			i = -1;
	}
	return (dest);
}
