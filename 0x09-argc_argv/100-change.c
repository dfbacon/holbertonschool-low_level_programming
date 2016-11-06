#include <stdio.h>
#include <stdlib.h>

/**
 * main - make change for as few coins as possible
 * @argc: argument counter
 * @argv: pointer to strings
 *
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int count, value;

	count = 0;
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	value = atoi(argv[1]);
	while (value >= 25)
	{
		count++;
		value -= 25;
	}
	while (value > 0)
	{
		if (value >= 10)
		{
			count++;
			value -= 10;
		}
		else if (value >= 5)
		{
			count++;
			value -= 5;
		}
		else if (value >= 2)
		{
			count++;
			value -= 2;
		}
		else if (value >= 1)
		{
			count++;
			value -= 1;
		}
	}
	printf("%d\n", count);
	return (0);
}
