#include <stdio.h>
/**
 * main - print lowercase alphabet in reverse
 * followed by a new line
 * Return: returns zero
 */
int main(void)
{
	int reverse;

	reverse = 'z';
	/* loop through z to a*/
	while (reverse >= 'a')
	{
		putchar(reverse);
		reverse--;
	}
	putchar('\n'); /* followed by a new line */
	return (0);
}
