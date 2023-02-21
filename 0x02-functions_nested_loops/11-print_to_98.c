#include "main.h"

/**
 * print_to_98 - prints a number from the number itself to 98
 *
 * Return: Always 0 (success)
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else
	{
		printf("%d", n);
	}
}
