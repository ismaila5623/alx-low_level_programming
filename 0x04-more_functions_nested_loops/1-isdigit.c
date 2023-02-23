#include "main.h"
#include <ctype.h>

/**
 * _isdigit: checks if a character is a digit or not
 *
 * Return: 0
 */

int _isdigit(int c)
{
	if (isdigit(c) == 0)
		return (0);
	else
		return (1);
}
