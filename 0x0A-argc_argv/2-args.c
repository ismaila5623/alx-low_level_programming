#include <stdio.h>

/**
 * main - main entry
 *@argc: argument count
 *@argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
