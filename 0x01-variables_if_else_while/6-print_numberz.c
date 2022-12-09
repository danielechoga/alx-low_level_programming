#include <stdio.h>
/**
 * main - prints single digits of base 10
 * starting from 0 using only putchar
 * Return: returns zero
 */
int main(void)
{
	int i;

	/* iterate i from 0 to 9 */
	for (i = '0'; i <= '9'; i++)
		putchar(i); /* print result*/
	putchar('\n'); /* followed by new line*/
	return (0);
}
