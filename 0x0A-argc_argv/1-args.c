#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument value
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s", argv[i]);

	return (0);
}
