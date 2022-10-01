#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers.
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	unsigned long sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j] == 0))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%ld\n", sum);
	return (0);
}
