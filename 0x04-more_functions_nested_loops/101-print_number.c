#include "main.h"

/**
 * print_number - prints an integer
 * @n: Integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int x = 1, numbers = n, y;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		numbers = n;
	}

	while (numbers > 9)
	{
		numbers = numbers / 10;
		x = x * 10;
	}

	while (x != 0)
	{
		y = n / x;
		n = n % x;
		x = x / 10;
		_putchar('0' + y);
	}
}
