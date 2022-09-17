#include "main.h"

/**
 * print_number - prints an integer
 * @n: Integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int d = 1, numbers = n, y;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		numbers = n;
	}

	while (numbers > 9)
	{
		numbers = numbers / 10;
		d = d * 10;
	}

	while (d != 0)
	{
		y = n / numbers;
		n = n % numbers;
		numbers = numbers / 10;
		_putchar('0' + x);
	}
}
