#include <stdio.h>

/**
 * main - Prints the size of various types of based on
 * the computer it is compiled and run on..
 * Return: Always 0.
 */

int main(void)
{
	char a;
	char b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of an int: %lu bye(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
