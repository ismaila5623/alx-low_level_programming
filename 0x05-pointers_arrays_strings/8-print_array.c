#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: array of integers
 * @n: num of elements to be printed in array
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
