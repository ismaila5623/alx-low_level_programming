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
	int n;
	int lastDigit;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	x = (n % 10);
	if (x == 0)
		lastDigit = x;
	else
		lastDigit = n - (x * 10);
	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0", n, lastDigit);
	else if (lastDigit < 6)
		printf("Last digit of %d is %d and i sless than 6 and not 0", n, lastDigit);
	return (0);
}
