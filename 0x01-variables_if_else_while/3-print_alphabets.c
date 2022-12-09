#include <stdio.h>
/**
 * main - prints alphabets in lower
 * and upper case
 * Return: returns zero
 */
int main(void)
{
	int lower, upper;
	/* print in lower case */
	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	/* print in upper case */
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	/* followed by newline */
	putchar('\n');
	return (0);
}
