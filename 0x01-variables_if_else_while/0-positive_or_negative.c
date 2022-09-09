#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- Used to assign a random number to the variable n each time it is exeecuted.
 * if the nuumber is greater than zero: it is positive.
 * if the number is less than zero: it is negative, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
