#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument value
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, x;

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x]; x++)
		{
			if (isdigit(argv[i][x]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
