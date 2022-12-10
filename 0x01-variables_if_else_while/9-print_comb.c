#include <stdio.h>
/**
 * main - prints all combinations of a single-digit
 * number seperated by comma followed by a space
 * Return: returns zero
 */
int main(void)
{
	int i;

	/* iterate from 0 to 9 */
	i = '0';
	while (i <= '9')
	{
/*put a number, comma, space in each iteration */
		putchar(i);
		i++;
	/* to ensure comma and space prints 8 times */
		if (i <= '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
