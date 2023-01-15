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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
