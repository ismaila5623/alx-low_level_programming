#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 upto 10 times
 *Return: prints 0 to 14 upto 10 times
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
