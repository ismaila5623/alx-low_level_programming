#include "main.h"

/**
 * _strlen - Returns the len of a string
 * @s: string to compute len on
 * Return: len of @s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
