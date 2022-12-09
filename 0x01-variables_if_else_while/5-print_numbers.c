#include <stdio.h>
/**
 * main - prints single digit numbers
 * of base 10 starting from 0
 * Return: returns zero
 */
int main(void)
{
	int i;

	/* initializing through 0 to 10 */
	for (i = 0; i < 10; i++)
		/* print results */
		printf("%d", i);
	putchar('\n'); /* followed by newline */
	return (0);
}
