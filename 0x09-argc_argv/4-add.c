#include <stdio.h>

/**
 * main - add positive numbers
 * @argc: argument counter
 * @argv: pointer to strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int counter, sum;

	if (argc > 0)
	{
		if (argv[] > '0' && argv[] < '9')
		{
			i = 0;
			while (i < argc)
			{
				sum = argv[i] + argv[i + 1];
				i++;
			}
			return (sum);
		}
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	else
		printf("%d\n", 0);
	return (0);
}
