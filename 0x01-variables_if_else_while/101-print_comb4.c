#include <stdio.h>
/**
 * main - prints all posible different -
 * combinations of three digits
 * Return: returns zero
 */
int main(void)
{
	/**
	 * let i rep the first digit
	 * j rep the second digit
	 * k rep the last digit
	 */
	int i, j, k;
	/* first digit from 0 to 7 */
	for (i = '0'; i < '8'; i++)
	{
	/* second digit from 0 to 8 */
		for (j = '0'; j < '9'; j++)
		{
	/* third digit from 0 to 9 */
			for (k = '0'; k <= '9'; k++)
			{
			/**
			 * remove similar combinations
			 * of i, j, k
			 */
				if ((i < j) && (j < k))
				{
					putchar(i);
					putchar(j);
					putchar(k);
				/**
				 * put spaces and comma
				 * within combinations
				 */
					if ((i != '7') || (j != '8') || (k != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	/* put a new line */
	putchar('\n');
	return (0);
}
