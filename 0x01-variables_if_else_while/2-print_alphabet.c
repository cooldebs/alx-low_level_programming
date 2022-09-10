#include <stdio.h>
/**
 * main- To print the alphabet in lowercase, followed by a new line.
 * You can only use the putchar.
 * Return: o
 */
int main(void)
{
	int ch;
	for (ch= 'a'; ch<= 'z')
	{
		putchar(ch);
	        ch ++;
	}
	putchar("\n");
	return (0);
}
