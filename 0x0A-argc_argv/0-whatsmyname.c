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
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
