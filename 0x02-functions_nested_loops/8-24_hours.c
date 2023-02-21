#include "main.h"

/**
 * jack_bauer - prints all mins and hrs withing 24 hours
 *
 * Return: Always 0 (success)
 */

void jack_bauer()
{
	for (int h = 0; h < 24; h++)
	{
		for (int m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
