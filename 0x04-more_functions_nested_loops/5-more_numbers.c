#include "main.h"

/**
 * more_numbers: prints numbers from 0 to 14 upto 10 times
 *
 */

void more_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
