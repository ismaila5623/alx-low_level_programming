#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number to return fact from
 *
 * Return: factorial of @n
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
