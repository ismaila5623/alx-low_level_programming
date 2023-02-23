#include "main.h"

/**
 * print_diagonal: prints diagonal line using / char
 *
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				if (j == i)
					_putchar('\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
