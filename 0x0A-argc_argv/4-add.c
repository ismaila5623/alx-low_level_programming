#include <stdio.h>
#include <ctype.h>

/**
 * main - main entry
 *@argc: argument count
 *@argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int i = 1;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (; i < argc; i++)
		{
			if (isdigit(argv[i]))
			{
				result = result + argv[i];
			}
			else
			{
				printf("Error\n");
				break;
			}
		}
		printf("%d\n", result);
	}

	return (0);
}
