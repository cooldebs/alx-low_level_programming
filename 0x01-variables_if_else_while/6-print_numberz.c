#include <stdio.h>
/**
 * main- Prints all single digit numbers of base 10.
 * You are not allowed to use any variable of type char.
 * You can only use the putchar function.
 * Return: 0
 */
int main(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
