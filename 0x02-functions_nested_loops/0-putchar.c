#include <unistd.h>
#include "main.h"
/**
 * main: This is the entry point of the program.
 * Program to print _putchar.
 * Return: 0
 */
int main(void)
{
	char ch_arr[5] = "_putchar";
	int n;

	for (n = 0; n <= 4; n++)
	{
		_putchar(ch_arr[n]);
	}
	_putchar('\n');
	return (0);
}
