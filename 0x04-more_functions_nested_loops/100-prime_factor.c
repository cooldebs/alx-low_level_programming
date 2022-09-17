#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int n = 612852475143, x;

	for (x = 3; x < 782849; x = x + 2)
	{
		while ((n % 1 == 0) && (x != n))
			n = n / x;
	}
	printf("%lu\n", n);

	return (0);
}
