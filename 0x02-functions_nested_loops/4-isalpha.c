#include "main.h"
#include <ctype.h>


/**
 * isalpha - checks for alphabets
 * @c: character to be checked
 *
 * Return: Always 0 (success)
 */

int _isalpha(char c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
