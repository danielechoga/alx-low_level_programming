#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase
 * Return: returns zero
 */
void print_alphabet(void)
{
	int letters;
	/* iterate through alphabets */
	for (letters = 'a'; letters <= 'z'; letters++)
		/*print results to std out*/
		_putchar(letters);
	_putchar('\n');
}
