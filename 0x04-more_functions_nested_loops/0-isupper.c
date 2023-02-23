#include "main.h"
#include <ctype.h>

/**
 * _isupper - function that checks for upper case character
 *@c: the char to be checked
 * Return: 1 for upper and 0 for none upper char
 */

int _isupper(int c)
{
	if (isupper(c) == 0)
		return (0);
	else
		return (1);
}
