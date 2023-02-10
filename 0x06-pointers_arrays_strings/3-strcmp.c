#include "main.h"
/**
 * _strcmp - function compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: either 0, positive or negative value
 */
int _strcmp(char *s1, char *s2)
{
	int vs1 = 0; /* value of s1 */
	int vs2 = 0; /* value of s2 */
	int comp; /* return value */

	/* Count the number of characters in each string */
	while (s1[0] != '\0')
	{
		vs1++;
		s1++;
	}
	while (s2[0] != '\0')
	{
		vs2++;
		s2++;
	}
	/* compare both strings */

	if (vs1 == vs2)
		comp = 0;
	else if (vs1 < vs2)
		comp = -15;
	else if (vs1 > vs2)
		comp = 15;

	return (comp);
}
