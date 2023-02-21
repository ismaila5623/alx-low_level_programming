#include "main.h"

/**
 * main - print_alphabet_x10 - prints alpha 10 times
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++
		}
		_putchar('\n');
	}
}
