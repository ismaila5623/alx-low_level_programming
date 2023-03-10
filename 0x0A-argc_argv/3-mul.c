#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry
 *@argc: argument count
 *@argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int result = 1;
	int i = 1;

	if (argc == 3)
	{
		for (; i < argc; i++)
		{
			result = result * atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	else
	{
		printf("Eror\n");
	}

	return (0);
}
