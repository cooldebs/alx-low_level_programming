#include <unistd.h>
#include "main.h"
/**
 * main- This is the entry point of the program.
 * Print character using _putchar.
 * Return: 0
 */
int main(void)
{
	char ch_arr[8] = "_putchar";
	int n;

	for (n = 0; n <= 7; n++)
	{
		_putchar(ch_arr[n]);
	}
	_putchar('\n');
	return (0);
}
