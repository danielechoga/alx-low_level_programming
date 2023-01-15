#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program adds positive numbers
 * @argv: pointer to character parameter
 * @argc: parameter holding number of arguments
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	/* if no number is passed to the program */
	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	/* if one of the numbers is not a digit */
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	/* add up each argument except the first argv[0] */
	for (i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]); /*convert argv to int*/
	}
	printf("%d\n", sum);
	return (0);
}
