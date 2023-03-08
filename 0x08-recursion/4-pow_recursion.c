#include "main.h"

/**
 * _pow_recursion - returns the value of @x to power @y
 * @x: first param
 * @y: second param
 *
 * Return: @x^@y
 */

int _pow_recursion(int x, int y)
{
	if (y <= 0)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
