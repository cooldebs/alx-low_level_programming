#include <stdio.h>

/**
 * main- Function to list all the natural numbers below 1024 (excluded)
 * They are multiples of 3 or 5.
 * Return: 0
 */
int main(void)
{
	int n, sum = 0;
	
	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += 1;
	}

	printf("%d\n", sum);

	return (0);
}
