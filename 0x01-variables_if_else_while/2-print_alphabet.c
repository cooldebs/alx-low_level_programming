#include <stdio.h>
#include <ctype.h>
/**
 * main- It prints the alphabet in lowercase, followed by a new line.
 * You can only use the putchar.
 * Return: 0
 */
int main(void)
{
	int ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch ++;
	}
	putchar("\n");
	return (0);
}
