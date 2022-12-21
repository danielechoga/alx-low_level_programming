#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * from 00:00 to 23:59
 */
void last_minutes(void);
void jack_bauer(void)
{
	int i, j, k, l;
	/* print from 00:00 to 19:59 */
	for (i = '0'; i < '2'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '5'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
	last_minutes();
}
/**
 * last_minutes - print from 20:00 to 23:59
 */
void last_minutes(void)
{
	int m, n, o, p;

	for (m = '2'; m < '3'; m++)
	{
		for (n = '0'; n <= '3'; n++)
		{
			for (o = '0'; o <= '5'; o++)
			{
				for (p = '0'; p <= '9'; p++)
				{
					_putchar(m);
					_putchar(n);
					_putchar(':');
					_putchar(o);
					_putchar(p);
					_putchar('\n');
				}
			}
		}
	}
}
