#include <stdio.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 if success, 1 if failure
 */
int main(int argc, char *argv[])
{
	int i;
	int multiply = 1; 

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			multiply = multiply * atoi(argv[i]);
		}
		printf("%d\n", multiply);
		return (0);
	}
	else
	{
		printf("Try Again\n");
		return (1);
	}
}
