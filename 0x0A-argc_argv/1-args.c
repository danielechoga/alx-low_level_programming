#include <stdio.h>
/**
 * main - program prints its name
 * @argv: pointer to first character parameter
 * @argc: parameter holding number of arguments
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
