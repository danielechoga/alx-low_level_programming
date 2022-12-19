#include "main.h"
/**
 * _islower - check for lowercase character
 * @c: the character to be checked
 *
 * Return: returns 0 or 1
 */
int _islower(int c)
{
	int i;

	if (c >= 'a')
		i = 1;
	else
		i = 0;
	return (i);
}
