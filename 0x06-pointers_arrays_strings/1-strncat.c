#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: main string
 * @src: appended string
 * @n; number of bytes of src
 *
 * Return: return pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr;
	int k = 0; /* for loop control */

	ptr = dest; /* point ptr to the string dest */

	/* increment pointer dest to null byte address */
	while (*dest != '\0')
	{
		dest++;
	}

	/* append to dest with src of n number of bytes*/
	while (k < n)
	{
		*dest = *(src + k);
		dest++;
		k++;

		/* end loop if number of bytes is more than size of src */
		if (k > ((int)sizeof(src))) /* type casting */
			k = n;
	}
	return (ptr);
}
