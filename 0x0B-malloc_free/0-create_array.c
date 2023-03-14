#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: the size of the array
 * @c: the char to initilize it with
 *
 * Return: pointer of the char
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	ch = malloc(sizeof(char) * size);
	
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	return (ch);
}
