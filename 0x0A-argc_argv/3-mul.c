#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 if success, 1 if failure
 */
int main(int argc, char *argv[])
{
	int num1, num2, multiply;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		multiply = num1 * num2;
		printf("%d\n", multiply);
		return (0);
	}
}
