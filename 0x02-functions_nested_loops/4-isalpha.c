#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: returns 1 if character is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	int i;

	if ((c >= 'A') || (c >= 'a'))
		i = 1;
	else
		i = 0;
	return (i);
}
