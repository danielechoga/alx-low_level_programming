#include <stdio.h>
#include <stdlib.h>
/**
 * main - program prints its name
 * @argv: pointer to first character parameter
 * @argc: parameter holding number of arguments
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
