#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @dm: number's last digit result.
 * Return: The value of the last digit.
 */
int print_last_digit(int dm)
{
	int dv;

	dv = (dm % 10);

	if (dv < 10)
		dv = (-1 * dv);
	_putchar(dv + '0');
	return (dv);
}
