#include <stdio.h>
/**
 * main - prints lowercase alphabets
 * except q and e
 * Return: returns zero
 */
int main(void)
{
	char c = 'a';
	/* initialize through the alphabets */
	for (c = 'a'; c <= 'z'; c++)
	{
		/* exempt q and e */
		if ((c != 'q') && (c != 'e'))
		{
			putchar(c);
		}
	}
	/* new line */
	putchar('\n');
	return (0);
}
