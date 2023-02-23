#include "main.h"
#include <ctype.h>

/**
 * _isupper(int c) : function that checks for upper case character
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (isupper(c) == 0)
		return (0);
	else
		return (1);
}
