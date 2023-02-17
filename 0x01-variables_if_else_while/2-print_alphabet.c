#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';

	/* your code goes there */
	while (c < 'z')
	{
		putchar(c);
		c++;
	}
	print("\n");
	return (0);
}
