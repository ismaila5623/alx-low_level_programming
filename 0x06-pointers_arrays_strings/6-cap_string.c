#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: the string to be capitalized.
 *
 * Return: point to be string
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' || str[index] <= 'z')
		{
			char c = 'a';
			char cap = 'A';

			while (c <= 'z')
			{
				if (str[index] == c)
				{
					str[index] = cap;
				}
				c++;
				cap++;
			}
		}
	}
	return (str);
}
