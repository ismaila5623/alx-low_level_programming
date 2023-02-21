#include "main.h"


/**
 * main - _islower(char c) - checks if input is lower or not
 *prototype is int _islower(int c)
 *
 * Return: Always 0 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
