#include "main.h"

/**
 * print_line - draws a straight line by certain number of times with _ char
 *@n: number of size
 *Return: prints straight line n number of times
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
