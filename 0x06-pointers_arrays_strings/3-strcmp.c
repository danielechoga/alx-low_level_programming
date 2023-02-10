#include "main.h"
/**
 * _strcmp - function compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if s1 & s2 are equal,
 * positive value if s1 is greater than s2,
 * or negative value if s1 is less than s2
 */

int _strcmp(char *s1, char *s2)
{
	int k = 0; /* loop control */
	int comp; /* return value */

	while (k == 0)
	{
	/* compare each string */
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
	/* if s1 is not equal to s2 exit loop */
		else
			k = 1;

	/* string s1 is the same as s2 */
		if ((*s1 && *s2) == '\0')
		{
			comp = 0;
			k = 1;
		}
	}
	comp = *s1 - *s2;
	return (comp);
}
