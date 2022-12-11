#include <stdio.h>
/**
 * main - prints diferent combinations-
 * of two digits
 * Return: returns zero
 */
int main(void)
{
	/* let i represent first digit */
	/* let j represent second digit */
	int i, j;
	/* first digit from 0 to 8 */
	for (i = '0'; i < '9'; i++)
	{
		/* second digit from 1 to 9 */
		for (j = '0'; j <= '9'; j++)
		{
		/* remove similar combinations of i anf j*/
			if (i < j)
			{
				putchar(i);
				putchar(j);
		/**
		 * putting spaces and comma
		 * within combinations
		 */
				if ((i != '8') || (j != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	/* put a newline */
	putchar('\n');
	return (0);
}
