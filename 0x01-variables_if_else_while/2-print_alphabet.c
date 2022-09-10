#include <stdio.h>
#include <ctype.h>
/**
 * main- It prints the alphabet in lowercase, followed by a new line.
 * You can only use the putchar.
 * Rturn: 0
 */
int main(void)
{
	char lowercase = 'a';
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase ++;
	}
	putchar('\n');
	return (0);
}
