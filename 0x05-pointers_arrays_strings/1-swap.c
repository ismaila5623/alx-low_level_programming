#include "main.h"

/**
 * swap_int - Swaps the value of two int
 * @a: the first int to be swap
 * @b: the second int to be swap
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
