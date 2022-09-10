#include <stdio.h>
/**
 * main: Entry point of the program.
 * Return: 0
 */
int main(void)
{
	int n1 = 48;
	int c = 0;
	int d;
	int alp = 44;

	while (c <= 99)
	{
		d = c + 1;
		while (d <= 99)
		{
			putchar((c/10) + n1);
			putchar((c % 10) + n1);
			putchar(32);
			putchar((d / 10) + n1);
			putchar((d % 10) + n1);
			if (c != 98 || d != 99)
			{
				putchar(alp);
				putchar(32);
			}
			d++;
		}
		c++;
	}
	putchar('\n');
	return (0);
