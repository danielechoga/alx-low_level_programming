#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: parameter accepts return value
 *
 * Return: returns 0 or 1
 */
int _isupper(int c)
{
	if (c <= 'Z')
	{
		c = 1;
	}
	else if (c <= 'z')
	{
		c = 0;
	}
	return (c);
}
