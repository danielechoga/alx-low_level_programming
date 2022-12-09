#include <stdio.h>
/**
 * main - prints all numbers of base 16
 * in lowercase
 * Return: return zero
 */
int main(void)
{
	int i, j;
	/* iterate numbers with i, letters with j*/
	i = '0';
	j = 'a';
	/* iterate from 0 to 9 */
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	/* iterate from a to f */
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
