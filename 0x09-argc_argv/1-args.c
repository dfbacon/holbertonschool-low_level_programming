#include <stdio.h>

/**
 * main - print number of arguments passed
 * @argc: argument count
 * @argv: pointer
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
