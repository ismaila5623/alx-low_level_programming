#include "main.h"

/**
 * _strlen - Returns the len of a string
 * @str: string to compute len on
 * Return: len of @str
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
