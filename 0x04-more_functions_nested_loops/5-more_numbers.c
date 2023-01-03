#include "main.h"
/**
 * more_numbers - function prints 10 times the numbers
 * from 0 to 14, followed by a newline
 */
void more_numbers(void)
{
	int i, j, k;

	for (k = 0; k < 10; k++)
	{
		i = '0';
	/* print 00 to 19 */
		while (i < '2')
		{
			for (j = '0'; j <= '9'; j++)
			{
			/* don't print i = 0 just i = 1 */
				if ((i > '0') && (j < '5'))
					_putchar(i);
			/* stop at 14 */
				if ((i < '1') || (j < '5'))
					_putchar(j);
			}
			i++;
		}
		_putchar('\n');
	}
}

