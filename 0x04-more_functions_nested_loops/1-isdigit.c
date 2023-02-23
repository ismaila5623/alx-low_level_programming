#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if a character is a digit or not
 *@c: the char to be checked
 * Return: 1 if digit and 0 if not
 */

int _isdigit(int c)
{
	if (isdigit(c) == 0)
		return (0);
	else
		return (1);
}
