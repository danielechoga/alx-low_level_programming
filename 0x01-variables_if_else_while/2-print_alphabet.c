#include <stdio.h>
/**
 * main - print the alphabet in lowercase
 * Return: returns zero
 */
int main(void)
{
	int letters;
	/* iterate through alphabets */
	for (letters = 'a'; letters <= 'z'; letters++)
		/*print results to std out*/
		putchar(letters);
	putchar('\n');
	return (0);
}
