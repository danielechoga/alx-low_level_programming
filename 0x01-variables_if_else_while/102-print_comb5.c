#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: returns zero
 */
int main(void)
{
	int i, j, k, l;
	/**
	 * i : first digit
	 * j : second digit
	 * spc: space
	 * k : third digit
	 * l : last digit
	 */
	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if ((k != '0') || (l != '0'))
					{
						if ((l > j) || (j < k))
						{
							if ((i <= k) && (j <= l))
							{
								if ((i != k) || (j != l))
								{
									putchar(i);
									putchar(j);
									putchar(' ');
									putchar(k);
									putchar(l);
									if (((i < '9') || (j < '8')) || ((k < '9') || (l < '9')))
									{
										putchar(',');
										putchar(' ');
									}
								}
							}
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
