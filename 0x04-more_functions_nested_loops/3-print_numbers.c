#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: prints 0 to 9
 */

void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
