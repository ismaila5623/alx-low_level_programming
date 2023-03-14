#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: the size of the array
 * @c: the char to initilize it with
 *
 * Return: pointer of the char
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0 || c == NULL)
		return (NULL);

	char *ch = (*char) malloc(size);
	int i = 0;

	while (i < size)
	{
		ch[i] = c;
		i++;
	}
	return (ch);
}
