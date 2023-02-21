#include "man.h"

/**
 * times_table - prints the times table of upto 9
 *
 * Return: Always 0 (success)
 */

void times_table(void)
{
	for (int i = 0; i < 10; i++)
	{
		_putchar('0');

		for (int j = 0; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			int prod = i * j;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
