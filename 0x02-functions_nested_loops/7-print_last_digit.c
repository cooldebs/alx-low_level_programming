#include "main.h"
/**
 * print_last_digit- function to print the last digit of a number.
 * @numb: The number input.
 * Return: value of the last digit.
 */
int print_last_digit(int numb)
{
	int last_digit = numb % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
