#include "main.h"

/**
 * print_line: draws a straight line by certain number of times with _ char
 *
 */

void print_line(int n)
{
	for (int i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
