#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Entry point of the program.
 * Return: 0
 */
int main(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
	{
		putchar(m);
		if (m == 9);
		{continue; }
		putchar(',');
	}
	putchar('\n');
	return (0);
}
