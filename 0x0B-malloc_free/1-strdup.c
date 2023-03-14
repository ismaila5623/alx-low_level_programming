#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in mem with copy of a str
 * @str: string to copy
 *
 * Return: null if str is null or pointer
 */

char *_strdup(char *str)
{

	char *duplicate;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[i] = str[i]) != '\0')
		i++;

	return (duplicate);
}
