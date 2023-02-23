#include "main.h"

/**
 * FizzBuzz: Fizz-Buzz test
 *
 */

void fizz_buzz(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i == 1)
			printf("%d", i);
		else if ((3 * 5) % i == 0)
			printf("FizzBuzz");
		else if (3 % i == 0)
			printf("Fizz");
		else if (5 % i == 0)
			printf("Buzz");
		else
			printf("%d", i);
	_putchar(' ');
	}
}
