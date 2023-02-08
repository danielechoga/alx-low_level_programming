#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: pointer to buffer
 * @src: pointer to string to be copied
 * @n: number of bytes to be copied
 *
 * Return: returns pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		/* copy n bytes of src to dest */
		*(dest + i) = *(src + i);

		/**
		 * if we get to the end of src and
		 * we still have n bytes left
		 * keep adding null character
		 */

		if (*(src + i) == '\0')
		{
			while (i < n)
			{
				*(dest + i) = '\0';
				i++;
			}
		}
	}
	return (dest);
}
