#include "man.h"

/**
 * reverse_array - reverse arry of ints
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int start;
	int end;
	int temp;

	start = 0;
	end = n;

	while (start < end)
	{
		temp = a[end];
		a[end] = a[start];
		a[start] = temp;

		start++;
		end--;
	}
}
